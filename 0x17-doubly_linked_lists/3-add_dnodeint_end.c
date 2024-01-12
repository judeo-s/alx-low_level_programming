#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 *
 * @head: dlistint_t **
 * @n: int
 * Return: dlistint_t *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		(*head)->prev = NULL;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
