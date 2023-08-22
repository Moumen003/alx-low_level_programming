#include "main.h"

/**
 * rev_string - function name
 * @s: input
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
