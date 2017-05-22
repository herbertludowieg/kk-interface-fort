CC = g++
CFLAGS = -Wall
EXEC_SRC = ./src/main.cc
EXEC = kk-no-gui
BUIILD_DIR = ./build
SOURCE_DIR = ./src
SRCS := $(wildcard src/*.cc)
SRCS := $(filter-out $(EXEC_SRCS) , $(SRCS))
DEP = $(SRCS:.cc=.o)

all: ./$(BUILD_DIR)/$(DEP) $(EXEC)

dir:
	mkdir ./$(BUILD_DIR)

clean:
	rm -rf *.o $(EXEC)

%.o: %.cc
	$(CC) $(CFLAGS) -c ./$(SOURCE_DIR)/$< -o ./$(BUILD_DIR)/$@

$(EXEC): ./$(BUILD_DIR)/$(DEP) $(EXEC_SRC)
	$(CC) $(CFLAGS) ./$(BUILD_DIR)/$(DEP) -o $@ $(EXEC_SRC)
