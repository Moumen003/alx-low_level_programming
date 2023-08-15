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
char a[] = "_putchar";
i = 0;
while (a[i] != 0)
{
_putchar(a[i]);
i++;
}
_putchar('\n');
return (0);
}
