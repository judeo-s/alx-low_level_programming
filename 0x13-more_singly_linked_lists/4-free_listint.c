#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: listint_t *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
