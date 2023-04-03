#include "main.h"

/**
 * _memcpy - func
 * @dest: dest array
 * @src: source array
 * @n: number of bytes to assign
 * Description: copy bytes
 * Return: pointer of an array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
