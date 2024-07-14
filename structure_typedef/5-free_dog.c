#include "dog.h"

/**
 * free_dog - A function that frees dogs
 * @d: struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
