#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - main
 * @head: for linked list
 * @str: var1
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length_nodedata = 0, index = 0;
	char *duplicate_str = strdup(str);
	list_t *th1node = (list_t *) malloc(sizeof(list_t));
	list_t *th2node;

	if (duplicate_str == NULL)
	{
		free(th1node);
		return (NULL);
	}
	if (th1node == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		length_nodedata++;
		index++;
	}

	th1node->str = duplicate_str;
	th1node->len = length_nodedata;
	th1node->next = NULL;

	if (*head == NULL)
		*head = th1node;

	else
	{
		th2node = *head;

		while (th2node->next != NULL)
		{
			th2node = th2node->next;
		}
		th2node->next = th1node;
	}
	return (*head);

}
