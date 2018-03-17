
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin

RM = rm -rf

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

OBJS = $(OBJ_DIR)/jogada.o $(OBJ_DIR)/main.o

QuebrandoBixo: clean dir $(OBJS)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $(OBJS) 

$(OBJ_DIR)/jogada.o: $(SRC_DIR)/jogada.cpp $(INC_DIR)/jogada.hpp
	$(CC) -c $(CPPFLAGS) -lm -I$(INC_DIR)/ -o $@ $<

$(OBJ_DIR)/main.o: $(INC_DIR)/jogada.hpp
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/main.cpp -lm -I$(INC_DIR)/ -o $@
dir:
	mkdir -p bin build

clean: dir
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*