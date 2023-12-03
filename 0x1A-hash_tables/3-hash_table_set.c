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

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[pos];
	ht->array[pos] = new_node;

	return (1);
}
