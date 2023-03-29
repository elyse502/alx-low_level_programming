#include "main.h"

/**
 * _strcat - my func
 * @dest: param 1
 * @src: param 2
 * Description: append string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int append_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[append_index] != '\0')
	{
		dest[dest_len] = src[append_index];
		dest_len++;
		append_index++;
	}

	return (dest);
}
