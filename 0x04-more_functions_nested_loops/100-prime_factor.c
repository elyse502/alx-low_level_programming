#include <stdio.h>

/**
 * main - my func
 * Description: Hello
 *
 * Return: number
 */

int main(void)
{
	long int num = 612852475143;
	long int num2 = 612852475143;
	long int factor = 0;

	while (num != 1)
	{
		long int i;

		for (i = 2; i <= num2; i++)
		{
			if (num % i == 0)
			{
				num = num / i;
				if (i > factor)
				{
					factor = i;
				}
				break;
			}
		}
	}
	printf("%ld\n", factor);
	return (0);
}
