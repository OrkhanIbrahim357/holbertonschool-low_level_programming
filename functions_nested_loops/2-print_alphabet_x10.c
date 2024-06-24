#include "main.h"

/**
 * print_alphabet_x10 - esas funksiya
 * Return : 0
 *
 */

void print_alphabet_x10(void)
{
	int sayghac = 0;
	char herf;

	while (sayghac++ <= 9)
	{
		for (herf = 'a'; herf <= 'z'; herf++)
			_putchar(herf);
		_putchar('\n');
	}
}
