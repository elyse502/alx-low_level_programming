#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - main fuction
 * Description: my description
 * @n: hello
 * Return: 0
 */

int print_last_digit(int n)
{
	char c = abs(n % 10);

	_putchar(c + '0');
	return (c);
}
