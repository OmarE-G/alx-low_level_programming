#include<stdio.h>
#include<stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 *
 * @size: size
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
