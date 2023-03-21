#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main fuction
 * Description: my description
 * @n: hello
 * Return: 0
 */

void print_to_98(int n)
{
	while (1)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		} else
		{
			break;
		}

		if (n < 98)
		{
			n++;
		} else
		{
			n--;
		}
	}
	printf("\n");
}
