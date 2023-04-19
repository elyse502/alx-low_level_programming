#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: Response.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
