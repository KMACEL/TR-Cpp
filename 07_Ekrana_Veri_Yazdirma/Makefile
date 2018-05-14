CC = g++
CFLAGS = -O2 -Wall -pedantic
LIBS = -lm -lnsl

test: src/main.cpp
	$(CC) $(CFLAGS) $(LIBS) -o test src/main.cpp

run:
	./test

clean:
	rm -f test *.o
