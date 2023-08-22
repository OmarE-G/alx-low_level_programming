#include<stdio.h>


/**
 * print_rev - reverses string
 *
 * @s: string input
 */

void print_rev(char *s)
{
	char *e = s;

	if (*e != '\0')
	{
		while (*e != '\0')
			e++;
		e--;
		while (e != s)
			putchar(*e--);
		putchar(*e);
	}

	putchar('\n');
}
