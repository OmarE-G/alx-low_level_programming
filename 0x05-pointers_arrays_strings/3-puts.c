#include<stdio.h>

/**
 * _puts - Prints string
 *
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

}

