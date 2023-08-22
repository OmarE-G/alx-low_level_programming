#include<stdio.h>


/**
 * swap_int - Swaps two ints
 *
 * @a : first ptr
 * @b : second ptr
 */
void swap_int(int *a, int *b);

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
