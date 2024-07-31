#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node at a given
 * index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve
 *
 * Return: The node at the given index or NULL if the index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	while (node != NULL)
	{
		if (i == index)
		{
		return (node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
