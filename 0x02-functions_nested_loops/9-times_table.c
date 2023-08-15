#include "main.h"

/**
 * times_table - function
*/

void times_table(void)
{
int i, x;
for (i = 0; i < 10; i++)
{
	for (x = 0; x < 10; x++)
	{
		if (x != 0 && i * x <= 9 )
		{
			_putchar(' '); _putchar(' ');
		}
		else if (x != 0)
		{
			_putchar(' ');
		}
		if (i * x < 10)
		{
			_putchar(i * x + 48);
		}
		else
		{
			_putchar(i * x / 10 + 48);
			_putchar(i * x % 10 + 48);
		}
		if (x != 9)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}
}
