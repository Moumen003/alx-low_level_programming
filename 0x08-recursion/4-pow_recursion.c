#include "main.h"

/**
 * _pow_recursion - fn name
 * @x: input
 * @y: another one
 *
 * Return: integer return
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
