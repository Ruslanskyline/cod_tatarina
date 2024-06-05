CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LIBS = -lm

all: skyline run

skyline: skyline.c lodepng.c lodepng.h
	$(CC) $(CFLAGS) -o skyline skyline.c lodepng.c $(LIBS)

run: skyline
	./skyline

clean:
	rm -f skyline
