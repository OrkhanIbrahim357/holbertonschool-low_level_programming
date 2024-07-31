#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function adds a new node at the end of a list.
 * @head: Node
 * @n: value of node
 * Return: the address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last_node;

	last_node = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	new->prev = last_node;
	last_node->next = new;

	return (new);
}
