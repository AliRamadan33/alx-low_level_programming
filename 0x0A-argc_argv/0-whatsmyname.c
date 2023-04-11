#include <stdio.h>
/**
 * main - prints the name of the program
 *
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", *argv);
    return (0);
}
