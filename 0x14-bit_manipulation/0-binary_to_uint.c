#include "main.h"

/**
* binary_to_uint - fn name
* @b: input binary
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 1 && *b != 0)
			return (0);
		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
