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
 * delete_nodeint_at_index -  a function that deletes the node at index
 *                            index of a listint_t linked list.
 *
 * @head: listint_t **
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	size_t len = listint_len(*head);
	unsigned int i = 0;

	if (index > len)
		return (-1);

	if (head)
	{
		node = *head;
		while (node != NULL)
		{
			if (i == index)
			{
				if (node == *head)
					*head = (*head)->next;
				else
					temp->next = node->next;
				free(node);
				node = NULL;
				return (1);
			}
			temp = node;
			node = node->next;
			i++;
		}
	}
	else
		return (-1);

	return (1);
}
