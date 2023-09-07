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
	int i = 0, ans = 0, x;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (i < 5)
	{
		if (x >= arr[i] && x > 0)
			ans += x / arr[i], x -= arr[i] * (x / arr[i]);
		i++;
	}

	printf("%d\n", ans);

	return (0);
}
