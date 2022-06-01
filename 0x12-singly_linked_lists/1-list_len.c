#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 * Return: number of elements
 */

size_t list_len(const list_t *k)
{
	size_t cont = 0;

	while (k != NULL)
	{
		k = k->next;
		cont++;
	}
	return (cont);
}
