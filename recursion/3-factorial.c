#include "main.h"

/**
 * factorial - main
 * @n: vp1
 *
 * Return: factorial results
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
