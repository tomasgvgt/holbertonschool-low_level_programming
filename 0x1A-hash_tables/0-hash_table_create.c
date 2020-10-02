#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the table.
 * Return: pointer to the table, NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t *));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
