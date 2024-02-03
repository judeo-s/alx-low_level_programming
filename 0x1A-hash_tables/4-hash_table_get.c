#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 *
 * @ht: const hast_table_t *
 * @key: const char *
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);

	temp = ht->array[index];

	while(temp)
	{
		if(!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
