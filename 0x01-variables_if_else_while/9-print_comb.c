#include <stdio.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	int num1;

	for (num1 = 48; num1 <= 57; num1++)
	{
		putchar(num1);
		if (num1 != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
