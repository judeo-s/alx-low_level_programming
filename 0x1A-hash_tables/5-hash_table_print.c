#include "hash_tables.h"


/**
 * hash_table_print - a function that prints a hash table.
 *
 * @ht: hast_table_t
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
	int counter = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			counter++;
			printf("'%s':", temp->key);
			printf("'%s'", temp->value);
			temp = temp->next;
			if (temp)
				printf(", ");
		}
		if (i + 1 < ht->size && ht->array[i + 1] && counter > 0)
			printf(", ");
	}
	printf("}\n");
}
