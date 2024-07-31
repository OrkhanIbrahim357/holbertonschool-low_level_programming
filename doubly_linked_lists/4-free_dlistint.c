#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - a function that frees a list
* @head: node
* Return: Free of List
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
