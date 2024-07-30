#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - main
 * @head: it is linked list
 * Return: evryth is empty
 *
 */
void free_list(list_t *head)
{
	list_t *empty_node;

	while (head != NULL)
	{
		empty_node = head->next;
		free(head->str);
		free(head);
		head = empty_node;
	}
}
