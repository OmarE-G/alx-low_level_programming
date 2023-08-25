#include<stdio.h>

/**
 * string_toupper - uppercase
 *
 * @s : string
 *
 *Return: string in uppercase
 */
char *string_toupper(char *s)
{
	char *st = s;

	while (*st)
		*st == (*st >= 'a' && *st <= 'z') ? *st - 'a' + 'A' : *st, st++;

	return (s);
}

