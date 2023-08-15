#include "main.h"

/**
 * print_alphabet - write
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
int ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\0');
}
