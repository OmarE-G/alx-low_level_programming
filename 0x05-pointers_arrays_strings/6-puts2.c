#include<stdio.h>
#include <stdbool.h>

/**
 * puts2 - prints alternatively
 *
 * @str: string
 */

void puts2(char *str)
{
	bool p = true;

	while (*str != '\0')
	{
		if (p)
			putchar(*str);
		p = !p;
		str++;
	}
	putchar('\n');
}
