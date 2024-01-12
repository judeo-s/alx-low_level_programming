#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 *
 * @head: dlistint_t *
 * @index: unsigned int
 * Return: dlistint_t *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t c_index = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && c_index < index)
	{
		head = head->next;
		c_index++;
	}

	return (head);
}
