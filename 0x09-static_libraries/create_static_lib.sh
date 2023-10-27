#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c 1* 0* 2* 3* 4* 5* 6* 9* _putchar.c
ar rc liball.a *.o
