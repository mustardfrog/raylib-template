CC=clang
CFLAGS=-Wall -Wextra -lGL -lraylib -lX11 -lm

main: main.c
	$(CC) main.c $(CFLAGS) -o main
