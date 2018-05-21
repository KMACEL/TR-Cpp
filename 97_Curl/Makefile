#sudo apt-get install libcurl4-gnutls-dev
#https://curl.haxx.se/libcurl/c/
CC = g++
CFLAGS = -O2 -Wall -std=c++11
LIBS = -lcurl
MAIN = src/main.cpp
OUT = test

build: $(MAIN)
	$(CC) $(CFLAGS) -o $(OUT) $(MAIN) $(LIBS)

run:
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
