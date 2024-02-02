#include "hash_tables.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * hash_table_create - a function to create and initialize a hash table
 *
 * @size: unsigned long int
 * Return: hash_table_t *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	int index;

	if (size <= 0)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = NULL;

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	return (table);
}
