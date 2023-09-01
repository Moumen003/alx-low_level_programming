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
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i;
		int f;
		int n;
		int sum;
		char *c;

		c = argv[argc];
		f = 0;
		for (i = 1; i < argc; i++)
		{
			if (c[i] > '9' || c[i] < '0')
			{
				printf("Error\n");
				f = 1;
				n = 1;
				break;
			}
		}
		sum = 0;
		while (f == 0)
		{
			for (i = 1; i < argc; i++)
			{
				sum += atoi(argv[i]);
			}
			printf("%d", sum);
			n = 0;
			f = 1;
		}
		return (n);
	}
}
