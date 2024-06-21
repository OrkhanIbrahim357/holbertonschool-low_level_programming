#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - True
 *
 * Return: Always 0
 */
int main(void)
{
int n, d_last;

srand(time(0));
n = rand() - RAND_MAX / 2;
d_last = n % 10;
if (d_last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, d_last);
}
else if (d_last == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, d_last);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d_last);
}
return (0);
}
