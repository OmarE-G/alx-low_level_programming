#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: Write a program that prints the alphabet
 * Write a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*code starts here*/
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

