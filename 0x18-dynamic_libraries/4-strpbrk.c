#include "main.h"

/**
 * _strpbrk - function
 * @s: array
 * @accept: array
 * Description: return string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
