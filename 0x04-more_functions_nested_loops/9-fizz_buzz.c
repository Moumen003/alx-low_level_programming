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
for (i = 1; i <= 100; i++)
{
	j = 0;
	if (i % 3 == 0)
		j = 1;
	if (i % 5 == 0)
		j = 2;
	if ((i % 5 == 0) && (i % 3 == 0))
		j = 3;
	switch(j)
	{
		case 1:
			printf(" Fizz");
		case 2:
			printf("Buzz");
		case 3:
			printf("FizzBuzz");
		default:
			printf(" %d", i);
	}
}
putchar('\n');
}

