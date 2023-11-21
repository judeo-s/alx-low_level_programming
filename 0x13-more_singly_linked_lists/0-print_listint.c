#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: const listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
