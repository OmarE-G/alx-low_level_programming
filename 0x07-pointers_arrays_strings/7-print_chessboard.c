		#include "main.h"
#include<string.h>

/**
 * print_chessboard - prints 8x8 array
 *
 * @a: array of pointer to chars
 */
void print_chessboard(char (*a)[8])
{

	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
			putchar(a[i][j++]);

		putchar('\n');
		i++;
	}

}
/**/
