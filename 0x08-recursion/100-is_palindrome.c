#include<stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0, j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
