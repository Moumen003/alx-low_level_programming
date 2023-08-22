#include "main.h"

/**
 * _atoi - fn name
 * @s: pointer to char
 */

int _atoi(char *s)
{
	int numbers;
	int negative = 0;
	int final;

	while (s[i])
	{
		if (s[i] == '-')
			negative++;
		else if (s[i] >= '0' && s[i] <= '9')
			numbers = numbers * 10 + (s[i] - '0');
		else if (num > 0)
			break;
	}
	if (negative % 2 == 0)
		final = numbers;
	else
		final = numbers * -1;
	return (final);
}
