#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: dlistint_t *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		tmp = NULL;
		head = head->next;
	}
}
