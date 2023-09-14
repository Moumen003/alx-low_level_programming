#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list check;

	unsigned int i;

	va_start(check, n)

	for (i = 0; i < n; i++)
	{
		_putchar(n + '0');
		if (separator != NULL && i != n - 1)
		{
			_putchar(separator);
			_putchar(' ');
		}
		if (separator != NULL && i == n - 1)
		{
			_putchar(separator);
			_putchar('\n');
		}
	}
	va_end(check);
}
