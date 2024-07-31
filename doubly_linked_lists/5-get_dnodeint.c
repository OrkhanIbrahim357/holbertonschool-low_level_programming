#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	while(node != NULL)
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
