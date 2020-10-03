#include "hash_tables.h"

/**
 * hash_table_set - sets key: value pairs to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 * Return: 1 succes, 0 fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *tmp = NULL;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index]; /*set tmp to index in the array*/
	while (tmp) /*search if there is a key equal to the one given*/
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	/*If there was not key equal to the one given, create and set new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key), free(new_node);
		return (0);
	}
	/*PLace new_node at the begining of the list of the index*/
	tmp = ht->array[index];
	new_node->next = tmp;
	tmp = new_node;
	return (1);
}
