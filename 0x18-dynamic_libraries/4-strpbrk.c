#include "main.h"

/**
*_strpbrk - function name
*@s: omg
*@accept: yagd3
*
*Return: bengrb el denya
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;

char *h;

i = 0;
while (s[i] != '\0')
{
	j = 0;
	while (accept[j] != '\0')
	{
		if (accept[j] == s[i])
		{
			h = s + i;
			return (h);
		}
		j++;
	}
	i++;
}

return (0);
}
