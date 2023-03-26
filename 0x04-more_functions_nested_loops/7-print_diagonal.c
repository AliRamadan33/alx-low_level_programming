#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input of function
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int d, i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (d = 1; d <= i; d++)
{
_putchar(' ');
}
_putchar(92);
}
_putchar('\n');

}
}
