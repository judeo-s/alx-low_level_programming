#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 *
 * @h: dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (length);

	while (h)
	{
		length++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}
