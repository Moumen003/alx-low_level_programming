#include "main.h"

/**
 * puts2 - function name
 * @str: str input
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

