#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 *               linked list, and returns the head node’s data (n).
 * @head: listint_t **
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head)
	{
		temp = *head;
		data = temp->n;

		*head = temp->next;
		free(temp);
	}
	return (data);
}
