#include "main.h"

/**
*print_diagsums - fn nanme
*@a: array
*@size: shoof
*/

void print_diagsums(int *a, int size)
{
int i;
int sum1;
int sum2;

sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
	sum1 += a[i];
	sum2 += a[size - i - 1];
	a += size;
}
printf("%d, %d\n", sum1, sum2);
}
