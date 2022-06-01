#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *k)
{
	size_t cont = 0;

	while (k != NULL)
	{
		if (k->str == NULL)
		{
			printf("[0] (nil)\n");
			k = k->next;
			cont++;
		}
		else
		{
			printf("[%u] %s\n", k->len, k->str);
			k = k->next;
			cont++;
		}
	}
	return (cont);
}
