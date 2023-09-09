#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

/**
* main - Write a program that multiplies two positive numbers.
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char **argv)
{
	char *n1, *n2;
	int x = 0, y = 0, i = 0, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = argv[1], n2 = argv[2];

	while (n1[i])
	{
		if (n1[i] < '0' || n1[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		x *= 10;
		x += n1[i] - '0';
		i++;
	}
	while (n2[j])
	{
		if (n2[j] < '0' || n2[j] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		y *= 10;
		y += n2[j] - '0';
		j++;
	}

	printf("%d\n", x * y);

	return (0);

}
