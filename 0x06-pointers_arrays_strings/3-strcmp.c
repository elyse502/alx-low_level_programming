#include "main.h"

/**
 * _strcmp - my func
 * @s1: param 1
 * @s2: param 2
 * Description: Hello
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
