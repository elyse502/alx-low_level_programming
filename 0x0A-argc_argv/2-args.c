#include <stdio.h>
#include "main.h"

/**
 * main - will print the program file path
 * @agrc: number of arguments
 * @argv: arguments
 * Description: prints program name
 * Return: Always 0 when Done
 */

int main(int agrc, char *argv[])
{
	int i = 0;

	while (agrc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
