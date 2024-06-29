#include "main.h"

/**
 * _puts - main
 * @str: var 1
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
