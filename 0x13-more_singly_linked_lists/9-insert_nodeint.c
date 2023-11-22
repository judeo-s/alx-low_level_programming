#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *                in a linked listint_t list.
 *
 * @h: const listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	if (h)
	{
		while (h)
		{
			result++;
			h = h->next;
		}
	}
	return (result);
}


/**
 * insert_nodeint_at_index - a function that inserts a new
 *                           node at a given position.
 *
 * @head: listint_t **
 * @idx: unsigned int
 * @n: int
 * Return: listint_t *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *temp;
	size_t len = listint_len(*head);
	unsigned int i = 0;

	if (idx > len)
		return (NULL);

	if (*head)
	{
		temp = *head;
		node = (listint_t *)malloc(sizeof(listint_t));
		if (node)
		{
			node->n = n;
			node->next = NULL;
			while (i < idx - 1)
			{
				temp = temp->next;
				i++;
			}
			node->next = temp->next;
			temp->next = node;
		}
	}
	else
		return (NULL);
	return (node);
}
