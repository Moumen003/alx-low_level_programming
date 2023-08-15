#include "main.h"

/**
 * print_sign - maloosh ay talateen
 * @n: ay betngan
 *
 * Return: shoof
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}



}
