#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list header
 *
 * Return: the number of elements in a linked list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *node = h;

	if (h == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
	node = node->next;
	i++;
	}

	return (i);
}
