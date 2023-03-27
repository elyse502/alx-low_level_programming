#include "main.h"

/**
 * puts2 - hello
 * @str: nice
 * Return: yummy
 */

void puts2(char *str)
{
	int length = 0;
	int index;

	while (str[length] != '\0')
	{
		length++;
	}

	for (index = 0; index < length; index++)
	{
		if (index != 0 && index % 2 != 0)
		{
			continue;
		}
		_putchar(str[index]);
	}
	_putchar('\n');
}
