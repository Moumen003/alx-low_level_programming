#include "main.h"

/**
 * fizz_buzz - main entry
 *
 * Description: prints numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
int i, j;

printf("1");
for (i = 2; i <= 100; i++)
{
	j = 0;
	if (i % 3 == 0)
	{
		if (i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" Fizz");
	}
	if (i % 5 == 0)
	{
		if (i % 3 == 0)
			printf(" FizzBuzz");
		else
			printf(" Buzz");
	}
	else
		printf(" %d", i);
}
putchar('\n');
}

