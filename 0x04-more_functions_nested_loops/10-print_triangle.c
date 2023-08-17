#include "main.h"

/**
 * print_triangle - function name
 * @size: input
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0, i < size, i++)
	{
		for (j = size; j > 0; j--)
			_putchar(' ');
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
