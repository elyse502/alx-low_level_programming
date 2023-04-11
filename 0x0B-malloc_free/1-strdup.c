#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a duplicate of str
 * @str: string
 *
 * Return: Always a pointer when Done
 */

char *_strdup(char *str)
{
	char *arrayP;

	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	arrayP = malloc(sizeof(*str) * size + 1);

	if (arrayP == 0)
		return (NULL);
	while (size--)
		arrayP[size] = str[size];

	return (arrayP);
}
