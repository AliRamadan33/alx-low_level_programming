#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers,
 *                from 0 to 14, followed by a new line
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j, count;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
count = j;
if (count > 9)
{
_putchar(1 + 48);
count = j % 10;
}
_putchar(count + 48);
}
_putchar('\n');
}
}
