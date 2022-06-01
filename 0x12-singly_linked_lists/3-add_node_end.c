#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	b = malloc(sizeof(list_t));
	if (!b)
		return (NULL);

	b->str = strdup(str);
	b->len = len;
	b->next = NULL;

	if (*head == NULL)
	{
		*head = b;
		return (b);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = b;

	return (b);
}
