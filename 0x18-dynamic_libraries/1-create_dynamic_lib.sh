#!/bin/bash
gcc -wall -wextra -werror -pendatic -c -fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY=.:$LD_LIBRARY_PATH
