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

	va_start(check, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			printf("%d%s ", va_arg(check, int), separator);
		}
		if (separator != NULL && i == n - 1)
		{
			printf("%d\n", va_arg(check, int));
		}
	}
	va_end(check);
}
