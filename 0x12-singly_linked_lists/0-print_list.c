#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: const list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;

		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (len);
}
