#include <stdio.h>

/**
 * main - entry point
 *
 * Description: bengarab
 *
 * Return: 0 (success)
*/

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 48)
{
putchar(',');
putchar(' ');
}
putchar(i);
}
putchar('\n');
return (0);
}
