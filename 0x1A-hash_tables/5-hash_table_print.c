#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flagg = 0;
	hash_node_t *tmp = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			for (tmp = ht->array[i]; tmp; tmp = tmp->next)
			{
				if (flagg == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				flagg = 1;
			}
		}
		printf("}\n");
	}
}
