#include "main.h"

/**
 * rev_string - function name
 * @s: input
 */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char t;

	while (s[i])
		i++;
	for (l = 0; l < i / 2; l++)
	{
		t = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = t;
	}
	_putchar('\n');
}
