#include<stdio.h>

/**
 * _strcmp - concat strings
 *
 * @s1 : d
 * @s2 : s
 * Return: int*
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			break;
		s1++, s2++;
	}
	return ((*s1 > *s2) ? 1 : ((*s2 > *s1) ? -1 : 0));
}


