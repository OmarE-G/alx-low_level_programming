#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "hash_tables.h"

/**
 * hash_table_set - sets key to value
 *
 * @ht: table
 * @key: key
 * @value: value
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int pos = key_index((const unsigned char *) key, ht->size);
	hash_node_t *new_node, *curr = ht->array[pos];


	strcpy(new_node->key, key), strcpy(new_node->value, value);

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			strcpy(curr->value, value);
			break;
		}
		curr = curr->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->next = ht->array[pos];
	ht->array[pos] = new_node;
	return (1);
}
