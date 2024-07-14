#include "dog.h"

/**
 * init_dog - initialize a  variable of type of struct dog
 * @d: struct
 * @name: name of the Puppy
 * @age: Never ask dog her/his age
 * @owner: Puppy's papa's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
