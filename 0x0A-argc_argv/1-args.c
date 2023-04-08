#include <stdio.h>
/**
 * main - will print program file path
 * @argv: parameter array
 * @argc: parameter count
 * Description: prints program name
 * Return: Always 0 when Done
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
