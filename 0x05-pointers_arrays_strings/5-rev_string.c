#include "main.h"

/**
 * rev_string - function name
 * @s: input
 */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;

	while (s[i])
		i++;
	char p[i];

	while (i--)
	{
		p[l] = s[i];
		l++;
	}
	while (l--)
	{
		s[i] = p[l];
		i++;
	}
	_putchar('\n');
}
