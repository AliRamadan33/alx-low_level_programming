#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, m;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	m = get_op_func(op)(num1, num2);
	printf("%d\n", m);

	return (0);
}

