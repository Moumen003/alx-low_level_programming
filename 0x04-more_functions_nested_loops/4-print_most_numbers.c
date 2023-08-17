#include "main.h"

/**
 * print_most_numbers - fn name
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2')
		{
			if (i != '4')
				_putchar(i);
		}
	}
}
