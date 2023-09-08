#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
#include <string.h>
/**
 * free_grid - makes an array
 *@grid: sz
 *@height: sz
 *Return:ptr
*/


void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
