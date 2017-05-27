CC = g++
CFLAGS = -Wall
BASE = ~/autschbach/git-kk-inter-fort/kk-inter-fort/no-gui
EXEC_SRC = $(BASE)/src/main.cc
EXEC = $(BASE)/kk-no-gui
BUIILD_DIR = $(BASE)/build
SOURCE_DIR = $(BASE)/src
SRCS := $(wildcard $(BASE)/src/*.cc)
SRCS := $(filter-out $(EXEC_SRCS) , $(SRCS))
DEP = $(SRCS:.cc=.o)

all: $($(BASE)/$(BUILD_DIR)/$(DEP)) $(EXEC)

dir:
	mkdir $(BASE)/$(BUILD_DIR)

clean:
	rm -rf $(BASE)/$(BUILD_DIR)/*.o $(BASE)/$(EXEC)

%.o: %.cc
	$(CC) $(CFLAGS) -c $(BASE)/$(SOURCE_DIR)/$< -o $(BASE)/$(BUILD_DIR)/$@

$(EXEC): $($(BASE)/$(BUILD_DIR)/$(DEP)) $(EXEC_SRC)
	$(CC) $(CFLAGS) $(BASE)/$(BUILD_DIR)/$(DEP) -o $@ $(EXEC_SRC)
