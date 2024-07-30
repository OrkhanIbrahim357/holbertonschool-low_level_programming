#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - main
 * @head: double ptr for first node
 * @str: var1
 * Return: updated node
 */

list_t *add_node(list_t **head, const char *str)
{
	int length_nodedata = 0, index = 0;
	char *string_dublicate = strdup(str);

	list_t *upd_node = (list_t *) malloc(sizeof(list_t));

	if (string_dublicate == NULL)
	{
		free(upd_node);
		return (NULL);
	}

	if (upd_node == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		length_nodedata++;
		index++;
	}

	upd_node->str = string_dublicate;
	upd_node->len = length_nodedata;
	upd_node->next = *head;
	*head = upd_node;

	return (upd_node);




}


