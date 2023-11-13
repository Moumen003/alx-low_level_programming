#include "main.h"
#include <stdio.h>

/**
*_strchr - function name
*@s: bos keda
*@c: wala 2a2olak balash
*
*Return: howa 3aref el feha
*/

char *_strchr(char *s, char c)
{
int i = 0;
char *found = NULL;

for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
	{
		found = s + i;
		break;
	}
}
return (found);
}
