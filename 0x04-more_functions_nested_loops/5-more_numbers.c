#include "main.h"

/**
 * more_numbers - function
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; i <= 14; i++)
		{
			if (k <= 9)
				_putchar(i);
			else
			{
				_putchar('1');
				_putchar(i % 10);
			}
		}
		k = 0;
		_putchar('\n');
	}
