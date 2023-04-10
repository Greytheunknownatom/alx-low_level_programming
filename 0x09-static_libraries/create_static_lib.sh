#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
arn -rn liball.a *.o
ranlib liball.a
