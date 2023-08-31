#include<stdio.h>

/**
 * _sqrt_recursion -returns the natural square root of a number.
 *
 *
 * @n : num
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if ((int) sqrt(n) == sqrt(n))
		return (sqrt(n));
	else
		return (-1);
}
