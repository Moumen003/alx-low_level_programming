#include "main.h"

/**
 * _strlen - function name
 * @s: input
 *
 * Return : i lenght  output of type int
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
