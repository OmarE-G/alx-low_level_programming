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

	if (ht == NULL || ht->array == NULL)
		return;

	pos = 0;
	while (pos < ht->size)
	{
		curr = ht->array[pos];
		while (curr != NULL)
		{
			temp = curr;
			curr = temp->next;
			if (temp->key)
				free(temp->key);
			free(temp->value);
			free(temp);
		}
		pos++;
	}
	if (ht->size)
		free(ht->array);
	free(ht);
}
