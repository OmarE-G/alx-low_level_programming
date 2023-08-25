#include<stdio.h>

/**
 * _strncpy - concat strings
 *
 * @dest : d
 * @src : s
 * @n : sz
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *st = dest;
	int c = 0, end = 0;

	while (c < n)
		*st = (end ? '\0' : *src), st++, src++, c++, end |= (*src == '\0');

	if (!end)
		*st = '\0';

	return (dest);
}


