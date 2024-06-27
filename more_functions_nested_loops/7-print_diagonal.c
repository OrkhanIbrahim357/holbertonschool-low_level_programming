#include "main.h"

/**
 * print_diagonal - main
 * @n: var 1
 */
void print_diagonal(int n)
{
	int xett, space;

	if (n > 0)
	{
		for (xett = 0; xett < n; xett++)
		{
			for (space = 0; space < xett; space++)
				_putchar(' ');
			_putchar('\\');

			if (xett == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
