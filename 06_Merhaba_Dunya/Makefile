CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11 

all : run

build:
	$(CC) $(CFLAGS) -o test src/main.cpp

run: build
	./test

clean:
	rm -f test *.o
