#include "main.h"

/**
 * _strcat - function name
 * @dest: input
 * @src: another
 *
 * Return: char return
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int *ptr;
	int m = 0;

	while (*dest++)
		i++;
	while (*src++)
		j++;
	ptr = &array[i];
	while (*src != '\0')
	{
		*(ptr + m) = *(src + m);
		m++;
	}
	*(ptr + m + 1) = '\0';
}
