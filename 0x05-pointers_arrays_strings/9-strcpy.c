#include<stdio.h>

/**
 * _strcpy - copies string
 *
 * @dest: destination
 * @src: source
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src != '\0')
		*dest = *src, src++, dest++;
	*dest = *src;

	return (n);
}
