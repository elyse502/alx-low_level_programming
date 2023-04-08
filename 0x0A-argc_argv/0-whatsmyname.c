#include <stdio.h>
#include "main.h"

/**
 * main - will print program file path
 * @agrc: number of arguments
 * @argv: arguments
 * Description: prints program name
 * Return: 0 when Done
 */

int main(__attribute__((unused)) int agrc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
