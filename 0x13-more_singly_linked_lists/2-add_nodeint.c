#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 *               at the beginning of a listint_t list.
 *
 * @head: listint_t **
 * @n: const int
 * Return: listint_t *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node)
		new_node->n = n;
	else
		return (NULL);

	if (*head)
		new_node->next = *head;
	else
		new_node->next = NULL;

	*head = new_node;
	return (new_node);
}
