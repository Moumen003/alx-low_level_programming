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
char ch;
ch = 'a';
while (ch <= 'z')
{
if (ch == 'q' || ch == 'e')
{
ch++;
}
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
