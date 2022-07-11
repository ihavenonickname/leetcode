.PHONY = all clean

CC = clang
CFLAGS = -std=c99 -Werror -Wall -Wpedantic -Wconversion

%/main:
	${CC} ${CFLAGS} $(@D)/solution.c $(@D)/main.c -o $(@D)/main

clean:
	rm -fv ./*/main
