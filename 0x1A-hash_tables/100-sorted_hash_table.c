#include "hash_tables.h"

/**
 * double_linked_insert - a function that inserts a node into a sorted
 * double linked list of the hash table
 *
 * @hash_map: shash_table_t *
 * @node: shash_node_t *
 * Return: void
 */
void double_linked_insert(shash_table_t *hash_map, shash_node_t *node)
{
	shash_node_t *current = NULL;

	if(!hash_map->shead)
	{
		hash_map->shead = node;
		hash_map->stail = node;
		return;
	}

	current = hash_map->shead;
	if (strcmp(current->key, node->key) > 0)
	{
		node->snext = hash_map->shead;
		hash_map->shead->sprev = node;
		hash_map->shead = node;
		node->sprev = NULL;
		return;
	}

	while (current->snext && strcmp(current->snext->key, node->key) < 0)
		current = current->snext;

	node->sprev = current;
	node->snext = current->snext;

	if (!current->snext)
		hash_map->stail = node;
	else
		current->snext->sprev = node;
	current->snext = node;
}	


/**
 * shash_table_create - a function to create the sorted hash table
 *
 * @size: unsigned long int
 * Return: shash_table_t *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_map = NULL;

	if (!size)
		return (NULL);

	hash_map = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (!hash_map)
		return (NULL);

	hash_map->size = size;
	hash_map->array = NULL;
	hash_map->shead = NULL;
	hash_map->stail = NULL;

	hash_map->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (!hash_map->array)
	{
		free(hash_map);
		return (NULL);
	}
	return (hash_map);
}


/**
 * shash_table_set - a function that inserts elements in a hash table
 *
 * @ht: shash_table_t *
 * @key: const char *
 * @value: const char *
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL;;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = NULL;
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->value = NULL;

	new_node->key = (char *)malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);

	new_node->value = (char *)malloc(strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->value, value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	double_linked_insert(ht, new_node);
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table to retrieve the data from
 * @key: the key
 *
 * Return: the value associated with the key if found, else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size || ht->array[index] == NULL)
		return (NULL);

	tmp = ht->shead;
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->snext;
	}

	return ((tmp == NULL) ? NULL : tmp->value);
}


/**
 * shash_table_print - prints a hash table in sorted order
 * @ht: the table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	putchar('{');

	node = ht->shead;
	while (node)
	{
		printf("'%s': '%s'%s", node->key, node->value,
			   (node->snext) ? ", " : "");

		node = node->snext;
	}
	puts("}");
}


/**
 * shash_table_print_rev - prints a hash table in reversed sorted order
 *
 * @ht: the table to print
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	putchar('{');
	node = ht->stail;

	while (node != NULL)
	{
		printf("'%s': '%s'%s", node->key, node->value,
			   (node->sprev) ? ", " : "");

		node = node->sprev;
	}
	puts("}");
}


/**
 * shash_table_delete - deletes a hash table
 * 
 * @ht: shash_table_t *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL;

	if (ht == NULL)
		return;

	if (ht->shead)
	{
		while (ht->shead != NULL)
		{
			current = ht->shead;
			ht->shead = ht->shead->snext;

			free(current->value);
			free(current->key);
			free(current);
		}
		free(ht->array);
	}
	free(ht);
}
