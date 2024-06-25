#include "main.h"
/**
 * more_numbers - main
 * Return: zero
 */
void more_numbers(void)
{
	int eded;
	int say;

	for (eded = 0; eded <= 9; eded++)
	{
		for (say = 0; say <= 14; say++)
		{
			if (say > 9)
				_putchar((say / 10) + '0');
			_putchar((say % 10) + '0');
		}
		_putchar('\n');
	}


}
