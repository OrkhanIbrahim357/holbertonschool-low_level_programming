#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main
 * @b: var1
 *
 * Return: ptrfor_b
 */
void *malloc_checked(unsigned int b)
{
	void *ptrfor_b;

	ptrfor_b = malloc(b);

	if (ptrfor_b == NULL)
	{
		exit(98);
	}
	return (ptrfor_b);
	free(ptrfor_b);
}
