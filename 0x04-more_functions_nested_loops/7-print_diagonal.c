#include<stdio.h>

/**
 * print_diagonal - prints a diagonal line n times
 *
 * @n : number of times to print line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("\\\n");
		}
	}
	else
	{
		printf("\n");
	}
}
