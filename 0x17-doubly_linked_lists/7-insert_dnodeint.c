#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @h: dlistint_t **
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	size_t index;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	index = 0;
	current = *h;
	while (current->next != NULL && index < (idx - 1))
	{
		current = current->next;
		index++;
	}

	if ((++index) < idx)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}

	return (new_node);
}
