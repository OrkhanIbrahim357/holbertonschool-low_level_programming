#include "main.h"

/**
 * _strcmp - main
 * @s1: varptr1
 * @s2: varptr2
 *
 * Return: calc
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
