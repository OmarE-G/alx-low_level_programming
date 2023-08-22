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
	{
		if (i == n - 1)
			printf("%d\n", *a), i++;
		else
			printf("%d, ", *a++), i++;
	}

}
