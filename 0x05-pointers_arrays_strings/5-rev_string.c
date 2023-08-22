#include<stdio.h>

/**
 * rev_string - reverses string
 *
 * @s: string
 */
void rev_string(char *s)
{

	char *e  = s;

	if (*s == '\0')
		return;

	while (*e != '\0')
		e++;
	e--;

	while (s <= e)
	{
		char temp = *s;

		*s = *e;
		*e = temp;
		e--, s++;
	}
}
