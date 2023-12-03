#include "hash_tables.h"

/**
 * hash_table_print - print
 *
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos;
	int first = 1;
	hash_node_t *curr;

	if (!ht)
		return;

	pos = 0;
	printf("{");
	while (pos++ < ht->size)
	{
		curr = ht->array[pos];
		while (curr)
		{
			if (curr->key != NULL)
			{
				if (!first)
					printf(", ");

				printf("'%s': '%s'", curr->key, curr->value);

				if (first)
					first = 0;
			}
			curr = curr->next;
		}
	}
	printf("}\n");

}
