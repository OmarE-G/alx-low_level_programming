#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "hash_tables.h"



/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
/**
 * hash_table_set -sets key to value
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
	char *newval;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			newval = strdup(value);

			if (newval == NULL)
				return (0);

			free(curr->value);
			curr->value = newval;
			return (1);
		}
		curr = curr->next;
	}

	new_node = make_hash_node(key, value);

	if (new_node == NULL)
		return  (0);

	new_node->next = ht->array[pos];
	ht->array[pos] = new_node;

	return (1);
}
