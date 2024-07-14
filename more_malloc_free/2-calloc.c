#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mmain
 * @nmemb: var1
 * @size: var2
 *
 * Return: yaddas 1
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int calloc_index;
	char *yaddas_bir, *yaddas_iki;

	if (nmemb == 0 || size == 0)
		return (NULL);

	yaddas_bir = malloc(size * nmemb);

	if (yaddas_bir == NULL)
		return (NULL);

	yaddas_iki = yaddas_bir;

	for (calloc_index = 0; calloc_index < (size * nmemb); calloc_index++)
		yaddas_iki[calloc_index] = '\0';

	return (yaddas_bir);
}
