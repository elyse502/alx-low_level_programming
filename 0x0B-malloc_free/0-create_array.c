#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars with a specific char
 * @size: size of array
 * @c: character initialized
 *
 * Return: Always character when Done
 */

char *create_array(unsigned int size, char c)
{
	char *arrayP;

	arrayP = malloc(sizeof(char) * size);

	if (size == 0 || arrayP == 0)
		return (0);

	while (size--)
		arrayP[size] = c;

	return (arrayP);
}
