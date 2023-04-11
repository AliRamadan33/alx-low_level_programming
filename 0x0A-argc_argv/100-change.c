#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num, i, sum = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
