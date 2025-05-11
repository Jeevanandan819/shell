# Compiler
CC = gcc

# Output executable
TARGET = shell_project

# Source directories
SRC_DIRS = . shell commands/math

# Include directories
INC_DIRS = . shell commands/math commands

# Build directory for object and dependency files
BUILD_DIR = build

# Find all .c source files
C_SOURCES = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))

# Convert each .c to a corresponding .o file in build/
OBJECTS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(C_SOURCES))

# Dependency files (auto-generated)
DEPS = $(OBJECTS:.o=.d)

# Include paths (-I)
INCLUDES = $(foreach dir,$(INC_DIRS),-I$(dir))

# Compiler flags
CFLAGS = -Wall -Wextra -g -MMD -MP $(INCLUDES)

# Default target
all: $(TARGET)

# Link the final executable
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

# Compile .c files to .o in build/
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Include dependency files if they exist
-include $(DEPS)
