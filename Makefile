# Binary name
NAME = minishell
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -g

# Project name
TARGET = bin/$(NAME)

# Find all .c files in src/, and replace with .o for object files
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=build/%.o)

# Default target
all: $(TARGET)

# Link all object files into final binary
$(TARGET): $(OBJS) | bin
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c into .o in build/
build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

# Create build/ directory if not exists
build:
	mkdir -p build

# Clean up
clean:
	rm -rf build bin

.PHONY: all clean

bin:
	mkdir -p bin

run:
	@./bin/$(NAME)