#include "main.h"

/**
 * _isalpha - omg what
 * @c: dat if uper or lower
 *
 * Return: to see if fit
*/

int _isalpha(int c)
{
if((c >= 97 && c <= 122) || (c >=48 && c <= 74))
return (1);
return (0);
}
