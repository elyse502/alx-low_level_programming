#include "function_pointers.h"
/**
 * print_name - Prints a Name.
 * @name: The name to be printed.
 * @f: A pointer to a Function that prints a Name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
