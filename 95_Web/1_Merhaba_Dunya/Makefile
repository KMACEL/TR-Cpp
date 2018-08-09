CC = g++
CFLAGS = -O2 -Wall
LIBS = -lm -lcgicc
MAIN = src/main.cpp
OUT = test

all: run
build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) -o $(OUT) $(MAIN)

run: build
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

lib:
	sudo apt-get install libcgicc5-dev libcgicc-doc

.PHONY: clean
