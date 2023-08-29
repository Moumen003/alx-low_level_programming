#include "main.h"

/**
*_strstr - bs ab2a
*@haystack: bs ba2a
*@needle: we malo
*
*Return: 2ooly keda
*/

char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int p;
char *c;

c = NULL;
p = 0;

if (*needle == 0)
	c = haystack;
else
{
for (i = 0; haystack[i] != '\0'; i++)
{
	j = 0;
	while (haystack[i] == needle[j])
	{
		if (needle[j] + 1 == '\0')
			break;
		p = 1;
		j++;
	}
	if (p == 1)
	{
		c = haystack + i - j;
		break;
	}
}
}
return (c);
}
