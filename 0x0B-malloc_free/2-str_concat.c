#include <stdlib.h>
/**
 * strlent - get string length
 * @str: string
 *
 * Return: Always number when Done
 */

int strlent(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

/**
 * str_concat - function
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always a pointer when Done
 */

char *str_concat(char *s1, char *s2)
{
	char *arrayP;

	int size1, size2, total;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strlent(s1);
	size2 = strlent(s2);

	arrayP = malloc(sizeof(char) * (size1 + size2) + 1);

	if (arrayP == 0)
		return (NULL);

	for (total = 0; total <= size1 + size2; total++)
	{
		if (total < size1)
			arrayP[total] = s1[total];
		else
			arrayP[total] = s2[total - size1];
	}

	arrayP[total] = '\0';

	return (arrayP);
}
