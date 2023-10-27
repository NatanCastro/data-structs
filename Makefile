COMMON_CFLAGS= -Wall -Wextra -std=c99 -pedantic -ggdb

build:
	gcc $(COMMON_CFLAGS) main.c -o main
run:
	make build
	./main
