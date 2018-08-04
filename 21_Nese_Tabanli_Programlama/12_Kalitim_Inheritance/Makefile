CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11
LIBS = src/lib/*
INCLUDES = -Isrc/include
MAIN = src/main.cpp
OUT = test
CLIBS = src/lib
CINCLUDE = src/include

all: run

build: is
	$(CC) $(CFLAGS) $(LIBS) $(INCLUDES) -o $(OUT) $(MAIN)

is: $(CINCLUDE)/*.cpp #src/include/muhendis.cpp src/include/calisan.cpp
	@if [ ! -d "$(CLIBS)" ]; then \
		mkdir $(CLIBS); \
	fi
	$(CC) $(CFLAGS) -c $^
	mv *.o $(CLIBS)

run: build
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
