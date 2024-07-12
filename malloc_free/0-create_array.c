#include <stdlib.h>
#include "main.h"

/**
 * create_array - main
 * @size: v1
 * @c: v2
 *
 * Return: arr
 *
 */
char  *create_array(unsigned int size, char c)
{

	cahr *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		arr[index] = c;
	return (arr);
}
