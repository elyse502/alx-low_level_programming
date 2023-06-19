#include "main.h"

/**
 * *_strcpy -  yes
 * @dest: hello
 * @src: world
 * Description: nice
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
