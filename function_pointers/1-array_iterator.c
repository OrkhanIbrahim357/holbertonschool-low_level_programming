#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - main
 * @size: v1
 * @array: vp2
 * @action: funptr
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + (int)i));
	}
}
