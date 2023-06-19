#include "main.h"

/**
 * _memset - func
 * @s: array
 * @b: byte
 * @n: number of bytes to assign
 * Description: assign constant byte into the array
 * Return: pointer of the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
