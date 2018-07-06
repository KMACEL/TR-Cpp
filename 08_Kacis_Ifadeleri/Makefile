CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11 

all: run

build: src/main.cpp
	$(CC) $(CFLAGS) $(LIBS) src/main.cpp -o test 

run: build
	./test

clean:
	rm -f test *.o
