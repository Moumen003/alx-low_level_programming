#include "main.h"

/**
 * print_line - function name
 * @n: input
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}
