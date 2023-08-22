#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * keygen - file name
 *
 * Description: gets the password for a file
 *
 * Return: there should be no return
 */

int main(void)
{
	int sum;
	char m;

	srand(time(NULL));

	while (sum <= 2550)
	{
		m = rand() % 126;
		sum += m;
		putchar(m);
	}
	putchar(2800 - sum);
	return (0);
}
