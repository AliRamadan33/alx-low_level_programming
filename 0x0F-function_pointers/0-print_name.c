#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer that takes a char * argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
