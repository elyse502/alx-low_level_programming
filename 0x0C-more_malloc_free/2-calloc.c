#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *baller;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	baller = mem;

	for (index = 0; index < (size * nmemb); index++)
		baller[index] = '\0';

	return (mem);
}
