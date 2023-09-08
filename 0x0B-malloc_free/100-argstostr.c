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



char *argstostr(int ac, char **av)
{
	int i = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		if (ptr == NULL)
			ptr = malloc(strlen(av[i]));
		else
			ptr = realloc(ptr, strlen(ptr) + strlen(av[i]));
		if (ptr == NULL)
		{
			return (NULL);
		}
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
		i++;
	}
	return (ptr);

}
