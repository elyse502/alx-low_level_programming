#include "main.h"

/**
 * string_toupper - func
 * @string: my string
 * Description: yes
 * Return: yes
 */

char *string_toupper(char *string)
{
	int index = 0;

	while (string[index])
	{
		if (string[index] >= 'a' && string[index] <= 'z')
			string[index] -= 32;

		index++;
	}

	return (string);
}
