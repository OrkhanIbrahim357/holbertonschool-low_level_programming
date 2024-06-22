#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
