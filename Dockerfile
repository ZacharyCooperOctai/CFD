ARG OPENMODELICA_IMAGE=openmodelica/openmodelica:v1.26.3-ompython
FROM ${OPENMODELICA_IMAGE}

ENV DEBIAN_FRONTEND=noninteractive \
    VIRTUAL_ENV=/opt/cfd-venv \
    PATH=/opt/cfd-venv/bin:$PATH \
    PYTHONPATH=/workspace/src \
    PIP_NO_CACHE_DIR=1 \
    PYTHONUNBUFFERED=1 \
    MPLBACKEND=Agg

RUN apt-get update -o Acquire::Retries=5 -o Acquire::http::Timeout=30 \
    && apt-get install -y --no-install-recommends \
    bash \
    ca-certificates \
    clinfo \
    coreutils \
    file \
    findutils \
    gcc \
    g++ \
    gdb \
    git \
    make \
    ocl-icd-libopencl1 \
    ocl-icd-opencl-dev \
    pocl-opencl-icd \
    python3-pip \
    python3-venv \
    && rm -rf /var/lib/apt/lists/*

# At runtime, entrypoint.sh will register the host Nvidia OpenCL ICD from
# /usr/lib/wsl/lib when the container is launched with GPU access under WSL.
# If that library is not present, the installed CPU ICDs such as PoCL remain
# available through ocl-icd as a fallback.

RUN python3 -m venv "${VIRTUAL_ENV}"

RUN useradd --create-home --shell /bin/bash --uid 1000 cfd

COPY requirements.txt /tmp/requirements.txt
RUN pip install --upgrade pip setuptools wheel \
    && pip install -r /tmp/requirements.txt

COPY docker/entrypoint.sh /usr/local/bin/container-entrypoint
COPY docker/cfd-doctor.sh /usr/local/bin/cfd-doctor
COPY docker/run-standalone-validation.sh /usr/local/bin/run-standalone-validation
COPY docker/run-coupled-scenarios.sh /usr/local/bin/run-coupled-scenarios

RUN chmod +x \
    /usr/local/bin/container-entrypoint \
    /usr/local/bin/cfd-doctor \
    /usr/local/bin/run-standalone-validation \
    /usr/local/bin/run-coupled-scenarios

WORKDIR /workspace
USER cfd
ENTRYPOINT ["/usr/local/bin/container-entrypoint"]
CMD ["bash"]
