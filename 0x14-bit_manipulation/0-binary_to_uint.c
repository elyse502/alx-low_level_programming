#include "main.h"

/**
 * binary_to_uint - Converts a Binary Number to an unsigned int.
 * @b: A pointer to a string containing Binary numbers of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted Number.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		num <<= 1;
		if (b[len] == '1')
			num += 1;
	}
	return (num);
}

