#include<stdio.h>

/**
 * _strcat - concat strings
 *
 * @dest : d
 * @src : s
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	char *st = dest;

	while (*st != '\0')
		st++;

	while (*src != '\0')
		*st = *src, st++, src++;

	*st = '\0';

	return (dest);
}


