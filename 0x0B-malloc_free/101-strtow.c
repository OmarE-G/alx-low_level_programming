#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
#include <string.h>
/**
* strtow - Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL

*@str: str
*Return:ptr
*/



char **strtow(char *str)
{
	//funstion that splits str by spaces into words

	char **ptr;
	int i = 0, c = 0, j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			c++;
		else i++;

		while (str[i] != '\0' && str[i] != ' ')
			i++;
	}
	ptr = malloc(sizeof(char *) * c);
	c = -1;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			c++;
		else
		{
			i++;
			continue;
		}
		j = 0;
		while (str[i] != '\0' && str[i] != ' ')
			j++;
		ptr[c] = malloc(sizeof(char) * j);
		if (ptr[c] == NULL)
		{
			while (c >= 0)
			{
				free(ptr[c]);
				c--;
			}
			free(ptr);
			return (NULL);
		}
	}




}
