#include<stdio.h>

/**
 * reverse_array - rev array
 *
 * @a : array
 * @n : len
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int temp = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
		i++;
	}

}

