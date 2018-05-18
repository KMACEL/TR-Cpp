CC = g++
CFLAGS = -O2 -Wall -pedantic
LIBS = -lm -lnsl src/Time.cpp
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
