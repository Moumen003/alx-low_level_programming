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
putchar(ch);
ch++;
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
