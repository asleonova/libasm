# libasm
some libc functions rewritten in Assembly language. 
There is a small library written in x64 assembly (Intel syntax).

Some tests are provided in main.c 

## Usage:
* first run `make` or `make test`
*`make` will create a library and `make test` will just complile all .s files with the main.c*

* if you want to use the library with you tests : then `#include libasm.h` in your .c files where you use these lib functions.

* then compile your .c files with the library using following flags:
`gcc -L. -lasm *.c && ./a.out` \
_"*.c" - it's all your .c files_
