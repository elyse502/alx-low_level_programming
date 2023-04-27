#include <stdio.h>

/**
 * First - Function that prints a string before the
 *        main Function is executed.
 * Return: no return.
 */

void __attribute__ ((constructor)) First()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
