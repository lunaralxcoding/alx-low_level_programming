#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a number is grater than 5 or not
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	else if (n < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	else
		printf("Last digit of %d is %d and is 0\n", n, n);

	return (0);
}
