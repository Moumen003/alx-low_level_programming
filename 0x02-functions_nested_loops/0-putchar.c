#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: bs keda
 *
 * Return: 0 (success)
*/

int main(void)
{
int i;
i = 0;
char a[7];
a[0] = '_'; a[1] = 'p'; a[2] = 'u';
a[3] = 't'; a[4] = 'c'; a[5] = 'h';
a[6] = 'a'; a[7] = 'r';
while (a[i] != 0)
{
_putchar(a[i]);
i++;
}
return (0);
}
