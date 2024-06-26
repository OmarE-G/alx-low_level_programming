#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s, *sep = ", ";

	va_start(ap, format);


	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

int first_arg(char *format)
{
	va_list ap;
	unsigned int i = 0;

	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(ap, int)), i++;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)),i++;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), i++;
			break;
		case 's':
			s = va_arg(ap, char *), i++;
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			i++;
	}

	return i;
}