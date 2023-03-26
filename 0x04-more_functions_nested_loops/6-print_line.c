#include "main.h"
/**
 * print_line -  function that draws a straight line in the terminal
 * @n: input of function
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
