#include "function_pointers.h"
/**
* print_name - fn name
* @name: wemalo
* @f: 7abibi
* Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
