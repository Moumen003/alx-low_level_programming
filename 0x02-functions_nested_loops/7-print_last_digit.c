#include "main.h"

/**
 * print_last_digit - function name
 * @n: print last
 *
 * Return: hanshoof
*/

int print_last_digit(int n)
{
int lg;
if (n >= 0)
{
lg = n % 10;
}
else
{
lg = ((n % 10) * -1);
}
_putchar(lg + '0');
return (lg);
}
