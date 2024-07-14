#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - main
 * @s1: vp1
 * @s2: vp2
 * @n: v3
 *
 * Return: ptrfor_concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrfor_concat;
	unsigned int size = n, concat_index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (concat_index = 0; s1[concat_index] ; concat_index++)
		size++;

	ptrfor_concat = malloc(sizeof(char) * (size + 1));

	if (ptrfor_concat == NULL)
		return (NULL);

	size = 0;

	for (concat_index = 0; s1[concat_index]; concat_index++)
		ptrfor_concat[size++] = s1[concat_index];

	for (concat_index = 0; concat_index < n; concat_index++)
		ptrfor_concat[size++] = s2[concat_index];

	ptrfor_concat[size] = '\0';

	return (ptrfor_concat);
}
