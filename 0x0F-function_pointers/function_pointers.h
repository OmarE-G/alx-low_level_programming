#ifndef F_POINTERS
#define F_POINTERS
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif

