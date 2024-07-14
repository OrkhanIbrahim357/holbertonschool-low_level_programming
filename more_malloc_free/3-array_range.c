#include "main.h"
#include <stdlib.h>

/**
 * array_range - main
 * @min: v1
 * @max: v2
 *
 * Return: ptrfor_arr
 */
int *array_range(int min, int max)
{
	int *ptrfor_arr, index, size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	ptrfor_arr = malloc(sizeof(int) * size);

	if (ptrfor_arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptrfor_arr[index] = min++;

	return (ptrfor_arr);
}
