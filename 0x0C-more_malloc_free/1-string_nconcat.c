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
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	end = min(n, strlen(s2));
	ptr = malloc(end + strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);

	end += strlen(s1);

	while (i < (int)strlen(s1))
		ptr[i] = s1[i], i++;
	while (i < end)
		ptr[i++] = s2[j++];
	ptr[i]	= '\0';

	return (ptr);
}
