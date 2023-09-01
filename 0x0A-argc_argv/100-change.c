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
	if (argc == 2)
	{
		int i;
		int lc;
		int m;

		int c[] = {25, 10, 5, 2, 1};

		lc = 0;

		m = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				lc += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
					break;
			}
		}
		printf("%d\n", lc);
		return (0);
	}
	else
		return (printf("Error\n"), 1);
}
