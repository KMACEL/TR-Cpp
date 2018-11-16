CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11 
MAIN = src/main.cpp
OUT = test

all: run

build: SelamlaSinif.o
	$(CC) $(CFLAGS) $(LIBS) $(MAIN) SelamlaSinif.o -o $(OUT) 

SelamlaSinif.o: src/SelamlaSinif.cpp
	$(CC) $(CFLAGS) -c src/SelamlaSinif.cpp

run: build
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
