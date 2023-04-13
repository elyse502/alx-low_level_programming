#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function
 * @ptr: A pointer to the memory previously allocated.
 * @new_size: The size in bytes for the new memory block.
 * @old_size: The size in bytes of the allocated space for ptr.
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pam;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pam = malloc(new_size);
		if (pam == NULL)
			return (NULL);
		return (pam);
	}
	if (new_size > old_size)
	{
		pam = malloc(new_size);
		if (pam == NULL)
			return (NULL);
		for (index = 0; index < old_size && index < new_size; index++)
			*((char *)pam + index) = *((char *)ptr + index);
		free(ptr);
	}
	return (pam);
}
