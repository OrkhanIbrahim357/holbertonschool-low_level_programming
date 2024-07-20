#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: var1
 * Return: topla
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int topla, i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < (int) n; i++)
	{
	topla += va_arg(args, int);
	}
	
	va_end(args);
	
	return (topla);
