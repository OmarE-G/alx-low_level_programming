#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing.....
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 100)
	{
		k += j;

		printf("%ld, \n", k);

		j = k - j;

		++i;
	}
	return (0);
}
