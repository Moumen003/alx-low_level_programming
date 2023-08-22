#include "main.h"

/**
 * puts_half - fn name
 * @str: bs ya input
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	if (i % 2 == 0)
		i /= 2;
	else
	{
		i = (i - 1) / 2;
	}
	i++;
	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
