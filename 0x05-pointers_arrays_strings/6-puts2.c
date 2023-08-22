#include<stdio.h>

/**
 * puts2 - prints alternatively
 *
 * @str: string
 */

void puts2(char *str)
{
	bool p = 1;

	while (*str != '\0')
	{
		if (p)
			putchar(*str);
		p = !p;
		str++;
	}
	putchar('\n');
}
