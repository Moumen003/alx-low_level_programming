#include "main.h"

/**
 * print_alphabet_x10: use
*/

void print_alphabet_x10(void)
{
int i;
int ch;
for (i = 0; i < 10; i++)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
return (0);
}
