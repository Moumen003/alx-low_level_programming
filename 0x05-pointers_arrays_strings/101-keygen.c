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
	char m;

	srand(time(NULL));

	m = rand() % 126;

	return (0);
}
