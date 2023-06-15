#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: list head
 * @index: returns the nth node of a dlistint_t linked list.
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0, found = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			found = 1;
			break;
		}
		head = head->next;
		i++;
	}

	if (found)
		return (head);

	return (NULL);
}