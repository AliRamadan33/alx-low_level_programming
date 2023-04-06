#include "main.h"

/**
 * _puts_recursion - prints a reverse string
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
