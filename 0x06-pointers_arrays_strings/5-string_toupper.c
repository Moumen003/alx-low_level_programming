#include "main.h"

/**
 * string_toupper - main function
 * @n: bengrb
 *
 * Return: hanrg char
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] -= 32;
	}
	return (n);
}
