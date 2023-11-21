#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node
 *                    at the end of a listint_t list.
 *
 * @head: listint_t **
 * @n: const int
 * Return: listint_t *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (new_node)
		new_node->n = n;
	else
		return (NULL);

	if (*head)
	{
		while (h != NULL)
		{
			if (h->next == NULL)
			{
				h->next = new_node;
				break;
			}
			h = h->next;
		}
	}
	else
		*head = new_node;
	return (new_node);
}
