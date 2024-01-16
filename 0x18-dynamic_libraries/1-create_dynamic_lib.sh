#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared \
	-Wl,-soname,liball.so -o liball.so *.c
