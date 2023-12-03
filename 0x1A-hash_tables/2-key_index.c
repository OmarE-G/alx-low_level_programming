#include<stdio.h>
#include<stdlib.h>
#include "hash_tables.h"


/**
 * key_index - Computes the index for a given key.
 *
 * @key: Pointer to the key (string) for which to compute the index.
 * @size: Size of the array or hash table where the index is needed.
 *
 * Return: The computed index for the given key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

