#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given Index to 1.
 * @n: Number to set.
 * @index: The Index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
