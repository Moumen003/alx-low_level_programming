#include "main.h"

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

while (s[i])
{
	if (s[i] == c)
	{
		found = s + i;
		break;
	}
	else
		i++;
}
return (found);
}
