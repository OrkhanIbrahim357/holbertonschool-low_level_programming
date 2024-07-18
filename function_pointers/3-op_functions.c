#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - main1
 * @a: v1
 * @b: v2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - main2
 * @a: v1
 * @b: v2
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - main 3
 * @a: var1
 * @b: var2
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - main4
 * @a: var1
 * @b: var2
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - main5
 * @a: var1
 * @b: var2
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
