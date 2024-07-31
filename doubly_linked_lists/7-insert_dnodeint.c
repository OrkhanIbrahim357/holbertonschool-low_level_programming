#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer named head and this first node
 * @idx: the index of the node, starting from 0
 * @n: value
 * Return: insersts node at a given index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode;
	unsigned int c = 0;

	newnode = NULL;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else
	{
		c = 1;
		while (temp != NULL)
		{
			if (c == idx)
			{
				if (temp->next ==  NULL)
				newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->prev = temp;
						newnode->next = temp->next;
						temp->next->prev = newnode;
						temp->next = newnode;
					}
				}
				break;
			}
			temp = temp->next;
			c++;
		}
	}
	return (newnode);
}
