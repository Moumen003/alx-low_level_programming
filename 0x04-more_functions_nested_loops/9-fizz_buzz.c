#include "main.h"

/**
 * main - entry main
 *
 * Description: to print numbers from 1 to 100
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 != 0 && i % 5 != 0)
			printf(" %d", i);
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
	}
	putchar('\n');
	return (0);
}
