#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: list head
 * @idx: index of the list where the new node should be added
 * @n: node data to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head,
				   unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *next_node = *head, *previous_node = *head, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (next_node != NULL && i != idx)
	{
		previous_node = next_node;
		next_node = next_node->next;
		i++;
	}

	if (i == idx)
	{
		previous_node->next = new_node;
		new_node->next = next_node;
		return (new_node);
	}

	return (NULL);
}
