#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - function
 * @ac: param A
 * @av: param B
 * Return: Always a pointer when Done
 */

char *argstostr(int ac, char **av)
{
	char *ptb;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	ptb = malloc(sizeof(char) * size + 1);

	if (ptb == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptb[index++] = av[arg][byte];

		ptb[index++] = '\n';
	}

	ptb[size] = '\0';

	return (ptb);
}
