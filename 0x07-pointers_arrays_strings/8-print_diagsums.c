#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_diagsums - prints sums of matrix diagonals
 *
 * @a: array
 * @size: sz
 *
 */
void print_diagsums(int *a, int size)
{

	int i = 0, s1 = 0, s2 = 0, j = 0;

	while (i < size)
		s1 += a[i + size * i], i++;

	while (j >= 0)
		s2 += a[size * (j + 1) - j - 1], j++;

	printf("%d, %d", s1, s2);

}
/**/
