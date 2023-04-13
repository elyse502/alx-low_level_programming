#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int pam = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		pam++;

	concat = malloc(sizeof(char) * (pam + 1));

	if (concat == NULL)
		return (NULL);

	pam = 0;

	for (index = 0; s1[index]; index++)
		concat[pam++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[pam++] = s2[index];

	concat[pam] = '\0';

	return (concat);
}
