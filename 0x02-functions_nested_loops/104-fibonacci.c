#include <stdio.h>

/**
  * main - Prints first 100 Fibonacci numbers.
  *
  * Return: Nothing.....
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;
	printf("%ld, %ld, \n", j, k);
	while (i < 100)
	{
		k += j;

		printf("%ld, \n", k);

		j = k - j;

		++i;
	}
	return (0);
}
