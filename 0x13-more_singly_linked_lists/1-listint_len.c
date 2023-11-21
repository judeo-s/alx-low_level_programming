#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *                in a linked listint_t list.
 *
 * @h: const listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	if (h)
	{
		while (h)
		{
			result++;
			h = h->next;
		}
	}
	return (result);
}
