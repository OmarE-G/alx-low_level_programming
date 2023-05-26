#include<stdio.h>

/**
 * print_more_numbers - prints the numbers, from 0 to 14, 10 times
 *
 * Return: void
 */
void print_more_numbers(void)
{

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

}
