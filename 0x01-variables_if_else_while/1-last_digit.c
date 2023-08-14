#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is it
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int p = n % 10;
	if (p > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	else if (p == 0)
		printf("Last digit of %d is %d and is 0\n", n, p);
	else if (p < 6 && p != 0)
		printf("LAst digit of %d is %d and is less than 6 and not 0\n", n, p);
	return (0);
}
