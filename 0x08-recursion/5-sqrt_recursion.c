#include "main.h"

/**
 * _sqrt_recursion - fn name
 * @n: input
 * @val: check
 * Return: output
 */


int s(int n, int val);
int _sqrt_recursion(int n)
{
	return (s(n, 1));
}


/**
 * s - main
 * @n: bos
 * @val: always s=check
 *
 * Return: 8aha
 */

int s(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (s(n, val + 1));
	else
		return (-1);
}
