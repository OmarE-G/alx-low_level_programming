#include<stdio.h>

/**
 * _strncat - concat strings
 *
 * @dest : d
 * @src : s
 * @n : sz
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	char *st = dest;
	int c = 0;

	while (*st != '\0')
		st++;

	while (c < n && *src != '\0')
		*st = *src, st++, src++, c++;

	*st = '\0';

	return (dest);
}


