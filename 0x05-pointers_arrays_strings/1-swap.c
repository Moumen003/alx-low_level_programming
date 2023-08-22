#include "main.h"

/**
 * swap_int - function name
 * @a: input ptr
 * @b input ptr another
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
