#include "main.h"

/**
* binary_to_uint - fn name
* @b: input binary
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != 1 && b[i] != 0)
			return (0);
		sum = sum + b[i] * (2 ^ (7 - i));
	}
	return (sum);
}
