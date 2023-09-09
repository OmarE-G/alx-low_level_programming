#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 *_realloc - Write a function that
 *reallocates a memory block using malloc and *free
 *@ptr: void
 *@old_size: unsigned int
 *@new_size: unsigned int
 *Return: ptr
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	return (realloc(ptr, new_size));
}
