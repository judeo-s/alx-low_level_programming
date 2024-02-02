#include "hash_tables.h"

/**
 * hash_table_create - a function to create and initialize a hash table
 *
 * @size: unsigned long int
 * Return: hash_table_t *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int index;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		table = NULL;
		return (NULL);
	}
	for (index = 0; index < size; index++)
		table->array[index] = NULL;

	return (table);
}
