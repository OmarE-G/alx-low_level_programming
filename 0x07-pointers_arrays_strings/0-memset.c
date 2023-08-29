#include "main.h"
#include<stdio.h>

/**
 * _memset - sets memory
 *
 * @s: st
 * @b: val
 * @n: count
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}

