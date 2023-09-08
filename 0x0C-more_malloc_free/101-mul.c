#include "main.h"

/**
* _print - fn name
* @n: int
* Return: 0
*/

void _print(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
* _puts - prints a string
* @str: ptr
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - fn name
 * @s: pointer to char
 *
 * Return: success if rkm
 */

int _atoi(char *s)
{
	unsigned int numbers = 0;
	int negative = 1;

	do {
		if (*s == '-')
			negative *= -1;
		else if (*s >= '0' && *s <= '9')
			numbers = numbers * 10 + (*s - '0');
		else if (numbers > 0)
			break;
	} while (*s++);
	return (numbers * negative);
}

/**
* is_digit_char - fn name
* @c: bs
* Return: el feha
*/

int is_digit_char(char c)
{
	return (c >= '0' && c <= '9');
}

/**
* main - fn name
* @argc: ma bs
* @argv: ya negm
* Description - feha kaza 7aga
*
* Return: 98 for fail
*/



int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!is_digit_char(argv[i][j]))
			{
				_puts("Error\n");
				exit(98);
			}
		}
	}

	_print(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
