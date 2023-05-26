#include<stdio.h>

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		if (i < 9)
			printf("\n");
	}

}
