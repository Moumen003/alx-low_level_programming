#include "main.h"

/**
 * _isdigit - function name
 * @c: input
 *
 * Return: 1 success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
