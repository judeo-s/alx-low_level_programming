#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: dlistint_t *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (length);

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
