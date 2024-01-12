#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 *
 * @head: a pointer to the head node
 * @index: the index of the node to the delete
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t c_index;
	dlistint_t *tmp;

	if (*head == NULL || head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		c_index = 0;

		while (tmp != NULL && c_index != index)
		{
			tmp = tmp->next;
			c_index++;
		}

		if (c_index < index)
			return (-1);

		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	tmp = NULL;

	return (1);
}
