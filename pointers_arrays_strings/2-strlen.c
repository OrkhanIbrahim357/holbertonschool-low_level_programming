#include "main.h"

/**
 * _strlen - main
 * @s: var 1
 *
 * Return: str-length
 */
int _strlen(char *s)
{
	size_t string_length = 0;

	while (*s++)
		string_length++;

	return (string_length);
}
