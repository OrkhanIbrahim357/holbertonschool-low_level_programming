#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - Computes the sum of all the integers in a doubly linked list
 * @head:
 * Pointer to the head of the doubly linked list
 *
 * Return:
 * The sum of all the integers in the list. If the list is empty, returns 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
