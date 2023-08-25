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
	int c = 0;

	while (c < n && *src != '\0')
		*st = *src, st++, src++, c++;

	*st = '\0';

	return (dest);
}


