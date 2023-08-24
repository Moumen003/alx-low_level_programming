#include "main.h"

/**
 * isl - cfghjg
 * @c: in the play
 *
 * Return: be the best
 */

int isl(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdl - buj
 * @c: fghjc
 * Return: cghm
 */



int isdl(char c)
{
	int i;
	int n = 0;

	char d[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == d[i])
			n = 1;
	return (n);
}


/**
 * cap_string - main function
 * @str: in the play
 *
 * Return: be the best
 */


char *cap_string(char *str)
{

	char *ptr = str;
	int f = 1;

	while (*str)
	{
		if (isdl(*str))
			f = 1;
		else if (isl(*str) && f)
		{
			*str -= 32;
			f = 0;
		}
		else
			f = 0;
		str++;
	}
	return (ptr);
}
