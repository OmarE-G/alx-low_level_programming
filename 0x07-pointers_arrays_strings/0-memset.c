#include "main.h"

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
	int c = 0;

	while (c < n)
		s[c] = b, c++;

	return (s);
}
/**/
