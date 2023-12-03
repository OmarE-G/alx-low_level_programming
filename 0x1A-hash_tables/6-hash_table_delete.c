#include "hash_tables.h"

/**
 * hash_table_delete - delete table
 *
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *curr, *temp;

	if (!ht)
		return;

	pos = 0;
	while (pos++ < ht->size)
	{
		curr = ht->array[pos];
		while (curr)
		{
			temp = curr;
			if (temp->key != NULL)
			{
				free(temp->key);
				free(temp->value);
			}
			curr = temp->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
