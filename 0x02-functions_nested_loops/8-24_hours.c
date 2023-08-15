#include "main.h"

/**
 * jack_bauer - function
*/

void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
	for (m = 0; m <= 59; m++)
	{
		if (h <= 9)
        {
                _putchar('0');
        }

		_putchar(h + '0');
		_putchar(':');
		if (m <= 9)
		{
			_putchar('0');
		}
		_putchar(m + '0');
		_putchar('\n');
	}	
}
}
