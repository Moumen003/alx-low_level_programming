#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
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
}
