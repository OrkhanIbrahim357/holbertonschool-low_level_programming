#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: the name of our Puppy
 * @age: Never ask dog her/his name
 * @owner: Puppy's dad
 *
 * Return: Null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *neww;
	int i;

	neww = malloc(sizeof(dog_t));
	if (!neww)
	{
		free(neww);
		return (NULL);
	}

	(*neww).name = malloc(sizeof(name) + 1);
	(*neww).owner = malloc(sizeof(owner) + 1);

	if (!(*neww).name || !(*neww).owner)
	{
		free(neww->name);
		free(neww->owner);
		free(neww);
		return (NULL);
	}
	for (i = 0; i < name[i]; i++)
	{
		neww->name[i] = name[i];
	}
	neww->name[i] = '\0';

	for (i = 0; i < owner[i]; i++)
	{
		(*neww).owner[i] = owner[i];
	}
	neww->owner[i] = '\0';
	neww->age = age;

	return (neww);
}
