.PHONY: clean

CC = g++
#CFLAGS = -g -Wall -fno-stack-protector
CFLAGS = -g -Wall -std=c++11

# match *.c
SOURCE = $(wildcard ./*.c*)
# match suffix
SUFFIX = $(suffix $(SOURCE))
# replace * with *.c
BIN = $(patsubst %$(SUFFIX), %, $(notdir $(SOURCE)))

$(BIN): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $@

# echo debug info
echo:
	@echo $(CC)
	@echo $(SOURCE)
	@echo $(SUFFIX)
	@echo $(BIN)

install:
	install -m 755 $(BIN) /usr/local/bin

clean:
	rm -rf $(BIN)
