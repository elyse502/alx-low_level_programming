#include <stdio.h>

/**
 * main - main function
 * Description: my description
 * Return: always returns 0
 */

int main(void)
{
	char first[] = "and that piece of art is useful\"";
	char second[] = "Dora Korpar, 2015-10-19\n";
	char buffer[100];

	sprintf(buffer, "%s - %s", first, second);

	fputs(buffer, stderr);
	return (1);
}
