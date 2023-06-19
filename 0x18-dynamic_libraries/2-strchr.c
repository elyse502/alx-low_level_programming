#include "main.h"

/**
 * _strchr - function to find a character in an array
 * @s: array
 * @c: character
 * Description: find a character
 * Return: memory address of the character ( pointer )
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
