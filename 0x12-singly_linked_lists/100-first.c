#include <stdio.h>

/**
 * b - prints from init by the loader before main
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
