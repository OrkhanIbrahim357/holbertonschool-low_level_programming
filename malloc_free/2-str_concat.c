#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main
 * @s1: vp1
 * @s2: vp2
 *
 * Return: strsadd
 */
char *str_concat(char *s1, char *s2)
{
	int added = 0;
	char *strsadd;
	int i;
	int size = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		size++;
	}

	strsadd = malloc(sizeof(char) * size);

	if (strsadd == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		strsadd[added++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		strsadd[added++] = s2[i];
	}

	return (strsadd);
}
