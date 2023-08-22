#include "main.h"

/**
 * print_rev - name of function
 * @s: input pointer
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

