#include <stdio.h>

/**
 * main - main
 * Return: zero
 */
int main(void)
{
	int eded;

	for (eded = 1; eded <= 100; eded++)
	{
		if ((eded % 3) == 0 && (eded % 5) == 0)
			printf("FizzBuzz");

		else if ((eded % 3) == 0)
			printf("Fizz");

		else if ((eded % 5) == 0)
			printf("Buzz");

		else
			printf("%d", eded);

		if (eded == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
