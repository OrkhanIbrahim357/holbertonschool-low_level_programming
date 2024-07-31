#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * delete_dnodeint_at_index - add node at index
  * @head: head node
  * @index: index of value
  * Return: if sucess 1 if not -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *temp;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = temp->prev;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (index == a)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		a++;
	}
	return (-1);
}
