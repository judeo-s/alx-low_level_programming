#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *                        of a listint_t linked list.
 *
 * @head: listint_t *
 * @index: unsigned int
 * Return: listint_t *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i = 0;

	if (head)
	{
		node = head;
		while (i < index && node)
		{
			node = node->next;
			i++;
		}
	}
	return (node);
}
