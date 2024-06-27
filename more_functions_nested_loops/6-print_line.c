#include "main.h"

/**
 * print_line - main
 * @n: var 1
 */
void print_line(int n)
{
	int xett;

	if (n > 0)
	{
		for (xett = 0; xett < n; xett++)
			_putchar('_');
	}

	_putchar('\n');
}
