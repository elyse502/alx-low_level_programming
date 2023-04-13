#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: A pointer when Done
 */
int *array_range(int min, int max)
{
	int *array, num, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		array[num] = min++;

	return (array);
}
