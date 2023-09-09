#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 * array_range - Write a function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: ptr
 */


int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		ptr[i++] = min++;
	return (ptr);
}
