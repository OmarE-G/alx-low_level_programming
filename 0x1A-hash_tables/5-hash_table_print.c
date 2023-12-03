#include "hash_tables.h"

/**
 * hash_table_print - print
 *
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *curr;

	if (!ht)
		return;

	pos = 0;
	curr = ht->array[pos];

	while (pos++ < ht->size)
	{
		while (curr)
		{
			if (curr->key != NULL)
				printf("{'%s': '%s'}", curr->key, curr->value);
			curr = curr->next;
		}
	}
}
