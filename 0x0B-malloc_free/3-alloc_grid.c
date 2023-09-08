#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
#include <string.h>
/**
 * alloc_grid - makes an array
 *@width: sz
 *@height: sz
 *Return:ptr
*/


int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	i = 0, j = 0;

	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}
