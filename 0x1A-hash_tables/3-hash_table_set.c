#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: hash_table_t
 * @key: const char
 * @value: const char *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *current_node;

	if (!ht || !key || !value)
		return (0);

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = (char *)malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = (char *)malloc(strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
	}
	new_node->next = NULL;
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (!current_node)
		current_node = current_node->next;
	current_node = new_node;
	return (1);
}
