#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: listint_t **
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL, *temp = NULL;

	if (head)
	{
		node = *head;
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp);
		}
	}
	*head = NULL;
}
