#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str : value
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c, i;

	i = 0;
	while ((c = str[i++]))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
