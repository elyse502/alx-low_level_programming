#include "main.h"

/**
 * _puts - hello
 * @str: nice
 * Return: yummy
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
