#include "main.h"

/**
 * print_rev - name of function
 * @s: input pointer
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (; i >= 0; i--)
		_putchar(*s + 0);
	_putchar('\n');
}

