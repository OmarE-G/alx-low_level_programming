#include<stdio.h>


/**
 * prime - check if a number is prime
 *
 *
 * @n : number
 * @i : iterator
 * Return: 1 if prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - check if a number is prime
 *
 *
 * @n : number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, i));
}


