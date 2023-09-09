#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
* string_nconcat - Write a function that concatenates two strings.
* @s1: char
* @s2: char
* @n: unsigned int
* Return: ptr
*/



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int end;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	end = min(n, strlen(s2));
	end = end + strlen(s1);
	i = strlen(s1);

	s1 = realloc(s1, n + strlen(s1) + 1);
	if (s1 == NULL)
		return (NULL);

	while (i <= end)
		s1[i++] = s2[j++];

	return (s1);
}
