#include "main.h"

/**
 * _strlen_recursion - funciton name even look recursion
 * @s: bos keda
 *
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s > '\0')
		i += _strlen_recursion(s + 1) + 1;
	return (i);
}
