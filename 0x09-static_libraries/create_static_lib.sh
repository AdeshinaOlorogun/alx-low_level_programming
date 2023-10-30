#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs liball.a *.o
ar -t liball.a
ranlib liball.a
