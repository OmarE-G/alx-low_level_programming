#include <stdio.h>



/**
* atoi - function
* @a: c
* Return: int
*/
int atoi(char *a)
{
	int ans = 0;

	while (*a)
	{
		if (*a > '9' || *a < '0')
			return (-1);

		ans *= 10;
		ans += *a - '0';
		a++;
	}
	return (ans);
}

/**
*main - main
* @argc: c
* @argv: array
* Return: 0
*/

int main(int argc, char **argv)
{
	int sum = 0, a;

	while(argc > 1)
	{
		argc--;
		a = atoi(argv[argc]);
		if (a < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
