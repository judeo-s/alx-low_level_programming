#include "lists.h"

/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * add_node - a function that adds a new node
 *            at the beginning of a list_t list.
 *
 * @head: list_t
 * @str: const char *i
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *node;

	len = _strlen(str);
	node = malloc(sizeof(list_t));

	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	node->str = strdup(str);
	node->len = len;
	*head = node;
	return (node);
}
