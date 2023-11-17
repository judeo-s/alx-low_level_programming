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
 * add_node_end - a function that adds a new node
 *            at th end of a list_t list.
 *
 * @head: list_t
 * @str: const char *i
 * Return: list_t *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t len = _strlen(str);

	if (str == NULL)
		len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}

	return (*head);
}
