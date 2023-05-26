#include<stdio.h>

/**
 * print_line - prints a line n times
 *
 * @n : number of times to print line
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("_");
	}
	printf("\n");
}
