#include <stdio.h>

/**
*main - main
* @argc: c
* @argv: array
* Return: 0
*/
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);

	return (0);
}
