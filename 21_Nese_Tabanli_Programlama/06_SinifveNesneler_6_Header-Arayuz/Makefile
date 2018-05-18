CC = g++
CFLAGS = -O2 -Wall
LIBS = -lm
MAIN = src/main.cpp
OUT = test

build: SelamlaSinif.o
	$(CC) $(CFLAGS) $(LIBS) -o $(OUT) $(MAIN) SelamlaSinif.o

SelamlaSinif.o: src/SelamlaSinif.cpp
	$(CC) $(CFLAGS) -c src/SelamlaSinif.cpp

run:
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
