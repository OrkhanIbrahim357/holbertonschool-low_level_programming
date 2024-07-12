#include "main.h"

/**
 * create_array -  a function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of malloc
 * @c: character which will be initialized
 *
 *Return: Returns NULL if size = 0
 *Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	n = 0;
	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	while (n < size)
	{
		*(array + n) = c;
		n++;
	}

	return (array);
}
