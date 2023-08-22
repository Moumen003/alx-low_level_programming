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
	srand(time(NULL));
	int m;

	m = rand();

	printf("Tada! Congrats\n");
	return (m);
}
