#include "main.h"

/**
 * more_numbers - function
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k <= 9)
				_putchar(k + 48);
			else
			{
				_putchar('1');
				_putchar((k % 10) + 48);
			}
		}
		k = 0;
		_putchar('\n');
	}
}
