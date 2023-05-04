#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: First number.
 * @m: The Second number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m, bits = 0;

	while (exclusive > 0)
	{
		bits += (exclusive & 1);
		exclusive >>= 1;
	}

	return (bits);
}
