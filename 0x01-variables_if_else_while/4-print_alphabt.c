#include <stdio.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
