#include "hash_tables.h"


/**
 * hash_table_delete - a function that deletes a hash table
 *
 * @ht: hash_table_t *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	if (ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				while (ht->array[i] != NULL)
				{
					tmp = ht->array[i];
					ht->array[i] = ht->array[i]->next;

					free(tmp->value);
					free(tmp->key);
					free(tmp);
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
