#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string which will be duplicated
 *
 * Return: Returns NULL if str = NULL. On success, the _strdup function
 * returns a pointer to the duplicated string. It returns NULL  if
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int size;
	char *new_str;
	unsigned int n;

	size = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	new_str = malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			*(new_str + n) = str[n];
		}
	}
	return (new_str);
}
