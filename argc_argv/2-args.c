#include <stdio.h>

/**
 * main - main
 * @argc: argc
 * @argv: argv
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
