#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
#include <string.h>
/**
 * argstostr - makes an array
 *@ac: sz
 *@av: sz
 *Return:ptr
*/

void _stringcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
}

char *argstostr(int ac, char **av)
{
	int i = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		free(ptr);
		ptr = realloc(ptr, ptr == NULL ? 0 : strlen(ptr) + strlen(av[i]) + 2);
		if (ptr == NULL)
		{
			return (NULL);
		}
		_stringcat(ptr, av[i]);
		_stringcat(ptr, "\n");
		i++;
	}
	return (ptr);

}
