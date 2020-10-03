#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table.
 * @ht: Hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp1 = NULL, *tmp2 = NULL;

	for (i = 0; i < ht->size; i++)
		for (tmp1 = ht->array[i]; tmp1; tmp1 = tmp2)
		{
			tmp2 = tmp1->next;
			free(tmp1->key), free(tmp1->value), free(tmp1);
		}
	free(ht->array);
	free(ht);
}
