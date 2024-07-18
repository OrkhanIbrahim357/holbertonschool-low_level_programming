#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - main
 * @name: vp1
 * @f: funptr
 * Return: myfuncname
 **/

	void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
