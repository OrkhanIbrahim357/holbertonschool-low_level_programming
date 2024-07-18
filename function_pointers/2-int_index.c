#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - main
 * @array: vp1
 * @size: v2
 * @cmp: vf3
 * Return: negative1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
