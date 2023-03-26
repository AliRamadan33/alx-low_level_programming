#include "main.h"
/**
 * print_square -  function that prints a square, followed by a new line
 * @size: input of function
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int i;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
	_putchar(35);
}
_putchar('\n');
}
}
