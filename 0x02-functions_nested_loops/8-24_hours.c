#include "main.h"

/**
 * jack_bauer - function
*/

void jack_bauer(void)
{
int h, m
for (h = 0; h <= 23; h++)
{
	if (h <= 9)
	{
		_putchar('0');
	}
	for (m = 0; m <= 59; m++)
	{
		_putchar(h);
		_putchar(':');
		if (m <= 9)
		{
			_putchar('0');
		}
		_putchar(m);
	}
}
