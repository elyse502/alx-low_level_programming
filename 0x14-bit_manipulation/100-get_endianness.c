#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If Big-endian - 0.
 *         If Little-endian - 1.
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);

	return (0);
}
