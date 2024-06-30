#include "main.h"

/**
 * print_rev - main
 * @s: var 1
 */

void print_rev(char *s)
{
	int a, r, l;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	l  = a;
	for (r = l - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
