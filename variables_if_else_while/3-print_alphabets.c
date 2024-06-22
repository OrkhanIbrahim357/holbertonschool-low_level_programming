#include <stdio.h>

/**
 * main - True
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	char letter2 = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter2 <= 'Z')
	{
		putchar(letter2);
		letter2++;
	}
	putchar('\n');

	return (0);
}
