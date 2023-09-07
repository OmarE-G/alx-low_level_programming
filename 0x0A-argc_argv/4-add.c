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
	int a = 0, b = 0;

	if (argc > 2)
		b = atoi(argv[2]);

	a = atoi(argv[1]);

	if (a < 0 || b < 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", a + b);

	return (0);
}
