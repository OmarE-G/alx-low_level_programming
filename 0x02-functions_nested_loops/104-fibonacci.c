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

	printf("%ld, %ld, ", j, k);
	while (i < 100)
	{
		k += j;

		printf("%ld, ", k);

		j = k - j;

		++i;
	}
	printf("\n");
	return (0);
}
