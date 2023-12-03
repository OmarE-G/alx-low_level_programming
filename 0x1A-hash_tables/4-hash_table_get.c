#include "hash_tables.h"

/**
 * hash_table_get - get value
 *
 * @ht: table
 * @key: key
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int pos;
	hash_node_t *curr;

	if (!key || !ht)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[pos];

	while (curr)
	{
		if (strcmp(key, curr->key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
