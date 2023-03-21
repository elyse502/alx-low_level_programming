#include <stdio.h>
/**
 * main - hello
 * Description: world
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, x = 0;
	int m = 0;

	while (x < 4000000)
	{
		x = a + b;
		a = b;
		b = x;
		if (x % 2 == 0)
			m += x;
	}
	printf("%i\n", m);
	return (0);
}
