#include "main.h"

/**
 * is_prime_number - fn name
 * @n: input
 * @o: bos keda
 * Return: shoof keda
 */

int cp(int n, int o);
int is_prime_number(int n)
{
	return (cp(n, 2));
}

/**
 * cp - name
 * @n: shdfv
 * @o: happ
 * Return: shoof el feha
 */

int cp(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (cp(n, o + 1));
}
