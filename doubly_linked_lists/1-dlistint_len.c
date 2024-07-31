#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function returns the number of elements in a linked list.
 * @h: nodes.
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
{

		i++;
		h = h->next;

}

	return (i);
}
