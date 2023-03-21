#include <stdio.h>

/**
 * main - main fuction
 * Description: my description
 * Return: 0
 */

int main(void)
{
	long int i;
	long int res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			res = res + i;
		}
	}
	printf("%ld\n", res);
	return (0);
}
