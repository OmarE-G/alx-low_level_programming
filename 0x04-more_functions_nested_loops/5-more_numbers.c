#include<stdio.h>

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			printf("%d", i);
		}
		if (j < 10)
			printf("\n");
	}

}
