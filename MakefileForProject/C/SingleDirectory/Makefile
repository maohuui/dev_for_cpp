.PHONY: clean

CC = gcc
#CFLAGS = -g -Wall -fno-stack-protector
#CFLAGS = -pipe -g -Wall -lpthread
CFLAGS = -g -Wall -DDEBUG -O0

# match *.c
SOURCE = $(wildcard ./*.c)
# replace * with *.c
BIN = $(patsubst %.c, %, $(notdir $(SOURCE)))

$(BIN): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $@

# echo debug info
echo:
	@echo $(CC)
	@echo $(SOURCE)
	@echo $(BIN)

install:
	install -m 755 $(BIN) /usr/local/bin

clean:
	rm -rf $(BIN)
