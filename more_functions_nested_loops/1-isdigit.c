#include "main.h"

/**
 * _isdigit - main
 * @c: var 1
 *
 * Return: zero
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
