.PHONY: clean

# multi file
INC = ./include
SRC = ./src
OBJ = ./obj
BIN = ./bin
BIN_TARGET = $(BIN)/test

CC = gcc
CFLAGS = -g -Wall -I${INC}

# match *.c
SOURCE = $(wildcard $(SRC)/*.c)
# replace *.o with *.c
OBJECT = $(patsubst %.c, $(OBJ)/%.o, $(notdir $(SOURCE)))

$(BIN_TARGET):$(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o $@
$(OBJ)/%.o:$(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# echo debug info
echo:
	@echo $(CC)
	@echo $(SRC)
	@echo $(INC)
	@echo $(OBJ)
	@echo $(BIN)

clean:
	rm -rf $(OBJECT) $(BIN_TARGET)
