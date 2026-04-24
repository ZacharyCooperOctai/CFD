BUILD_DIR ?= ../../build/native
SRC_DIR := src/ffd_isat

CC ?= gcc
CFLAGS ?= -O2 -std=c99 -Wall -Wextra -Wno-unused-parameter -fcommon
CPPFLAGS ?= -I$(SRC_DIR)
LDLIBS ?= -lOpenCL -lm

SOURCES := \
	$(SRC_DIR)/standalone_main.c \
	$(SRC_DIR)/main_gpu.c \
	$(SRC_DIR)/utility.c \
	$(SRC_DIR)/ffd_data_reader.c \
	$(SRC_DIR)/sci_reader.c \
	$(SRC_DIR)/initialization.c \
	$(SRC_DIR)/io.c \
	$(SRC_DIR)/parameter_reader.c \
	$(SRC_DIR)/timing.c \
	$(SRC_DIR)/data_writer.c \
	$(SRC_DIR)/physics_sources.c

OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/obj/%.o,$(SOURCES))
TARGET := $(BUILD_DIR)/ffd_isat

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(LDLIBS)

$(BUILD_DIR)/obj/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)/obj $(TARGET)
