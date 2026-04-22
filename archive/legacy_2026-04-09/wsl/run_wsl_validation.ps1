[CmdletBinding()]
param(
    [string]$Distro = "Ubuntu",
    [string]$WslSourceRoot = "/home/zachary-cooperbaldock/isat_ffd",
    [string]$RunDir = "output/wsl_validation_run",
    [switch]$SkipBuild,
    [switch]$Detached
)

$ErrorActionPreference = "Stop"

function Quote-Wsl([string]$Text) {
    return "'" + ($Text -replace "'", "'""'""'") + "'"
}

function Convert-ToWslPath([string]$WindowsPath, [string]$DistroName) {
    $resolved = [System.IO.Path]::GetFullPath($WindowsPath)
    if ($resolved -match '^(?<drive>[A-Za-z]):\\(?<rest>.*)$') {
        $drive = $matches["drive"].ToLowerInvariant()
        $rest = $matches["rest"] -replace '\\', '/'
        if ([string]::IsNullOrWhiteSpace($rest)) {
            return "/mnt/$drive"
        }
        return "/mnt/$drive/$rest"
    }
    throw "Failed to convert Windows path to WSL path: $WindowsPath"
}

$repoRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $repoRoot

$runDirPath = Join-Path $repoRoot $RunDir
$pythonExe = Join-Path $repoRoot ".venv\Scripts\python.exe"
if (-not (Test-Path $pythonExe)) {
    $pythonExe = "python"
}

Write-Host "[1/4] Regenerating SCI inputs..."
& $pythonExe "convert_to_sci.py"
if ($LASTEXITCODE -ne 0) {
    throw "convert_to_sci.py failed"
}

Write-Host "[2/4] Syncing run directory..."
New-Item -ItemType Directory -Force $runDirPath | Out-Null

$syncFiles = @(
    "input.ffd",
    "dc_model.ffd",
    "dc_model.cfd",
    "dc_model.dat",
    "Kernels_3D.cl",
    "data_structure_gpu.h",
    "modelica_ffd_common.h"
)

foreach ($file in $syncFiles) {
    Copy-Item -Path (Join-Path $repoRoot $file) -Destination $runDirPath -Force
}

$runInputPath = Join-Path $runDirPath "input.ffd"
$runInputText = Get-Content -Path $runInputPath -Raw
if ($runInputText -match "(?m)^outp\.version\s+\S+") {
    $runInputText = [regex]::Replace($runInputText, "(?m)^outp\.version\s+\S+", "outp.version RUN")
} else {
    if (-not $runInputText.EndsWith("`n")) {
        $runInputText += "`n"
    }
    $runInputText += "outp.version RUN`n"
}
Set-Content -Path $runInputPath -Value $runInputText

$logPath = Join-Path $runDirPath "log_gpu.ffd"
if (Test-Path $logPath) {
    $archiveName = "log_gpu_{0}.ffd" -f (Get-Date -Format "yyyyMMdd_HHmmss")
    Move-Item -LiteralPath $logPath -Destination (Join-Path $runDirPath $archiveName) -Force
}

foreach ($staleFile in @("run_stdout.log", "run_stderr.log", "ffd.pid")) {
    $stalePath = Join-Path $runDirPath $staleFile
    if (Test-Path $stalePath) {
        Remove-Item -LiteralPath $stalePath -Force
    }
}

$runDirWsl = Convert-ToWslPath -WindowsPath $runDirPath -DistroName $Distro
$binaryPathWsl = "$runDirWsl/ffd_isat_fresh"

if (-not $SkipBuild) {
    Write-Host "[3/4] Building WSL standalone binary..."
    $buildCmd = @(
        "set -e",
        "cd $(Quote-Wsl $WslSourceRoot)",
        "gcc -O2 -fcommon -DCL_TARGET_OPENCL_VERSION=120 -I src/ffd_isat -o $(Quote-Wsl $binaryPathWsl) main_standalone.c src/ffd_isat/main_gpu.c src/ffd_isat/initialization.c src/ffd_isat/timing.c src/ffd_isat/data_writer.c src/ffd_isat/io.c src/ffd_isat/utility.c src/ffd_isat/parameter_reader.c src/ffd_isat/sci_reader.c src/ffd_isat/ffd_data_reader.c -lOpenCL -lm"
    ) -join "; "

    & wsl.exe -d $Distro -- sh -lc $buildCmd
    if ($LASTEXITCODE -ne 0) {
        throw "WSL build failed"
    }
}

if ($Detached) {
    Write-Host "[4/4] Starting detached validation run..."
    $stdoutPath = Join-Path $runDirPath "run_stdout.log"
    $stderrPath = Join-Path $runDirPath "run_stderr.log"
    $runCmd = @(
        "set -e",
        "cd $(Quote-Wsl $runDirWsl)",
        "exec ./ffd_isat_fresh"
    ) -join "; "

    $proc = Start-Process -FilePath "wsl.exe" `
        -ArgumentList @("-d", $Distro, "--", "sh", "-lc", $runCmd) `
        -RedirectStandardOutput $stdoutPath `
        -RedirectStandardError $stderrPath `
        -WindowStyle Hidden `
        -PassThru

    if (-not $proc -or $proc.HasExited) {
        throw "Failed to start detached validation run"
    }

    Set-Content -Path (Join-Path $runDirPath "ffd.pid") -Value $proc.Id

    Write-Host "Detached run started."
    Write-Host "Run directory: $runDirPath"
    Write-Host "Monitor log:    $RunDir\log_gpu.ffd"
    Write-Host "Monitor stdout: $RunDir\run_stdout.log"
} else {
    Write-Host "[4/4] Running standalone validation..."
    $runCmd = @(
        "set -e",
        "cd $(Quote-Wsl $runDirWsl)",
        "./ffd_isat_fresh"
    ) -join "; "

    & wsl.exe -d $Distro -- sh -lc $runCmd
    if ($LASTEXITCODE -ne 0) {
        throw "Standalone validation failed"
    }
}
