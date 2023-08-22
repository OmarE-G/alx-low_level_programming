#include<stdio.h>


/**
 * _strlen - gives string length
 * @s : string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;
	return (len);
}

/**
 * puts_half - prints half string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int n = _strlen(str), skip;

	if (n & 1)
		n--;

	n /= 2;

	skip = _strlen(str) - n;

	while (skip--)
	{
		str++;
	}

	while (*str != '\0')
	{
		putchar(*str++);
	}

	putchar('\n');

}
