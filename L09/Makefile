#!/bin/bash

CC = gcc
CFLAGS = -Wall -Isrc
BUILD_DIR = build
SRC_DIR = src

all : create_directories main student course

create_directories :
	$(shell mkdir -p documentation)
	$(shell mkdir -p documentation/docs)
	$(shell mkdir -p build)

main : $(SRC_DIR)/main.c | docs
	$(CC) -c $< -o build/main $(CFLAGS)

student : $(SRC_DIR)/student.c $(SRC_DIR)/student.h
	$(CC) -c $< -o $(BUILD_DIR)/student.o $(CFLAGS)

course : $(SRC_DIR)/course.c $(SRC_DIR)/course.h
	$(CC) -c $< -o $(BUILD_DIR)/course.o $(CFLAGS)

doxyfile :
	doxygen -g

docs : doxyfile
	doxygen Doxyfile

clean :
	rm -rf documentation
	rm -rf $(BUILD_DIR)
