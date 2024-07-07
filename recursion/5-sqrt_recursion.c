#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - main
 * @num: var1
 * @root: var2
 *
 * Return: sqrt
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - main
 * @n: var1
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
