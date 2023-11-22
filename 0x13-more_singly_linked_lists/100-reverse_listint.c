#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head: listint_t **
 * Return: listint_t *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous = NULL, *next = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;

	return (*head);
}
