#include "main.h"

/**
 * print_rev - hello
 * @s: nice
 * Return: yummy
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
