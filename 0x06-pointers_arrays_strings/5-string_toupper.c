#include "main.h"

/**
 * string_toupper - main function
 * @n: bengrb
 *
 * Return: hanrg char
 */

char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 97 && *n <= 122)
			*n -= 32;
		n++;
	}
	return (n);
}
