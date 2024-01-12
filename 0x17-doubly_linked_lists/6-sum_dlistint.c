#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: dlistint_t *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
