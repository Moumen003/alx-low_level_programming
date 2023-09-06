#include "main.h"

/**
* str_concat - fn name
* @s1: input
* @s2: another one
* Return: kefyaa
*/

char *str_concat(char *s1, char *s2)
{


int size1, size2, size;
char *ptr;

if (s1 == NULL)
	s1 = '\0';
if (s2 == NULL)
	s2 = '\0';

if (*s1 == '\0' && *s2 == '\0')
	return ('\0');

for (size1 = 0; s1[size1] != '\0'; size1++)
;

for (size2 = 0; s2[size2] != '\0'; size2++)
;

size = size1 + size2;

ptr = malloc(size *sizeof(*s1) + 1);

if (ptr == 0)
	return (0);

while (size2--)
{
	ptr[size - 1] = s2[size2];
	size--;
}
while (size1--)
{
	ptr[size - 1] = s1[size1];
	size--;
}

return (ptr);
}
