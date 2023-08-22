#include "main.h"

/**
 * _atoi - fn name
 * @s: pointer to char
 *
 * Return: success if rkm
 */

int _atoi(char *s)
{

    int numbers;
    int negative = 1;

   do {
	   if (*s == '-')
		   negative *= -1;
	   else if (*s >= '0' && *s <= '9')
		   numbers = numbers * 10 + (*s - '0');
	   else if (numbers > 0)
		   break;
   }
   while (*s++);
   return (numbers * negative);
}
