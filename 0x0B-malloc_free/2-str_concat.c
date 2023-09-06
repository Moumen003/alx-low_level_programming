#include "main.h"

/**
* str_concat - fn name
* @s1: input
* @s2: another one
* Return: kefyaa
*/

char *str_concat(char *s1, char *s2)
{


int size1, size2, size, i;
char *ptr;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";


for (size1 = 0; s1[size1] != '\0'; size1++)
;

for (size2 = 0; s2[size2] != '\0'; size2++)
;

size = size1 + size2;

ptr = malloc(size *sizeof(*s1) + 1);

if (ptr == 0)
	return (0);

for (i = 0; i <= size; i++)
{
	if (i < size1)
		ptr[i] = s1[i];
	else
		ptr[i] = s2[i - size1];
}

return (ptr);
}
