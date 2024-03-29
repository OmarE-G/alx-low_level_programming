#include <stdio.h>



/**
* atoi - function
* @a: c
* Return: int
*/
int atoi(char *a);

/**
*main - main
* @argc: c
* @argv: array
* Return: 0
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
