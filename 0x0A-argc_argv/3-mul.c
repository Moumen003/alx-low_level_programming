#include <stdio.h>
#include <stdlib.h>

/**
* main - fn name
* @argc: hanshoof
* @argv: elfeha
* Return: teslm
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int x1;
		int x2;
		int result;

		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		result = x1 * x2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
