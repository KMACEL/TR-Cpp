#sudo apt-get install libcurl4-gnutls-dev
#https://curl.haxx.se/libcurl/c/
CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++14
LIBS = -pthread
MAIN = src/main.cpp
OUT = test

all: run

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) $(MAIN) -o $(OUT)

run: build
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
