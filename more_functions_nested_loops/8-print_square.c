#include "main.h"

/**
 * print_square - main
 * @size: var 1
 * Return: zero
 */
void print_square(int size)
{
	int en, hundurluk;

	if (size > 0)
	{
		for (hundurluk = 0; hundurluk < size; hundurluk++)
		{
			for (en = 0; en < size; en++)
				_putchar('#');

			if (hundurluk == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
