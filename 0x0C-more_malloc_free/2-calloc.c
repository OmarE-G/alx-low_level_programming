#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: ptr
 *
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	return (calloc(nmemb, size));
}
