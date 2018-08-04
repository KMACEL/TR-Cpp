CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11
LIBS = -lm
MAIN = src/main.cpp
OUT = test

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) -o $(OUT) $(MAIN) src/Mesaj.h

run:
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
