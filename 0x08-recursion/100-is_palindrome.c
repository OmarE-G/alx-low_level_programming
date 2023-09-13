#include<stdio.h>
#include<string.h>



/**
 * is_pal - checks if a string is a palindrome
 *
 * @s: string to check
 * @i: iterator
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_pal(char *s, int i)
{

	if (i == strlen(s) / 2)
		return (1);
	if (*(s + i) == *(s + strlen(s) - i - 1))
		return (is_pal(s, i + 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0));
}

