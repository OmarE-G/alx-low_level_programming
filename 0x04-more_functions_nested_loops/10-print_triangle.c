#include<stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				printf(" ");
			}
			for (k = 1; k <= i; k++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	printf("\n");
}
