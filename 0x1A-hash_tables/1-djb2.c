#include<stdio.h>
#include<stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str : value
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (c = *str++)
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
