CC = g++
CFLAGS = -O2 -Wall
LIBS = -I /home/mert.acel/MA/boost/boost_1_67_0
MAIN = src/main.cpp
OUT = test

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) -o $(OUT) $(MAIN)

run:
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
