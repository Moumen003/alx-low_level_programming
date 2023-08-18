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
int i;

printf("1");
for (i = 2; i <= 100; i++)
{
	if ((i % 3) == 0)
	{
		if ((i % 5) == 0)
			printf(" FizzBuzz");
		else
			printf(" Fizz");
	}
	if ((i % 5) == 0)
	{
		if ((i % 3) == 0)
			printf(" FizzBuzz");
		else
			printf(" Buzz");
	}
	else if ((i % 3 != 0) && (i % 5 != 0))
		printf(" %d", i);
}
putchar('\n');
return (0);
}
