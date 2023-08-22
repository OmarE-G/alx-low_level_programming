#include<stdio.h>

/**
 * print_array - prints array
 *
 *
 * @a: array
 * @n: len
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
		printf("%d", *(a + 4 * i)), i++;

	putchar('\n');
}
