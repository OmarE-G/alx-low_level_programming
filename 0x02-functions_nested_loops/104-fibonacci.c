#include <stdio.h>

/**
  * main - Prints first 100 Fibonacci numbers.
  *
  * Return: Nothing.....
  */
int main(void)
{
	int i = 0;
	long long int j = 1, k = 2;

	printf("%lld, %lld, ", j, k);
	while (i < 98)
	{
		k += j;

		printf("%ld, ", k);

		j = k - j;

		++i;
	}
	printf("\n");
	return (0);
}
