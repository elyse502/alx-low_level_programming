#include "main.h"
#include <stdio.h>

/**
 * print_array - hello
 * @a: nice
 * @n: yes
 * Return: yummy
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num + 1 < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
