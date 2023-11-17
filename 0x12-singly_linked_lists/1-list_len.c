#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *            in a linked list_t list.
 *
 * @h: const list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
