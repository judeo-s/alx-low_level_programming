#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: dlistint_t **
 * @n: int
 * Return: dlistint_t *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		(*head)->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		if ((*head)->next != NULL)
			(*head)->prev = new_node;

		*head = new_node;
	}

	return (new_node);
}
