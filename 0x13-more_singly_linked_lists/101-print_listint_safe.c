#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *node = head;
	
	if (head == NULL)
		return (98);

	while (node->next == NULL || node->next >= node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		len++;
		node = node->next;
	}

	return (len);
}
