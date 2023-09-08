#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
#include <string.h>
/**
* str_concat - function that concatenates two strings.
*@s1: str
*@s2: str
*Return:ptr
*/


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	ptr = (char *)malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		ptr[k] = s2[l];
		k++;
		l++;
	}
	ptr[k] = '\0';
	return (ptr);

}
