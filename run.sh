CC="clang"
CFLAGS="-std=c99 -Werror -Wall -Wpedantic -Wconversion -fno-omit-frame-pointer"

$CC $CFLAGS ./$1/solution.c ./$1/main.c -o ./main && ./main

