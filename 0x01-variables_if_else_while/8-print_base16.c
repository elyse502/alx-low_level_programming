#include <stdio.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	char n[] = "0123456789abcdef";

	int count;

	for (count = 0; count < 16; count++)
	{
		putchar(n[count]);
	}
	putchar('\n');
	return (0);
}
