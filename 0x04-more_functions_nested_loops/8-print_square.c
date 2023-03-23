# include "main.h"

/**
 * print_square - my func
 * Description: hello
 * @size: yo
 * Returns: number
 */

void print_square(int size)
{
	int times = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (times < size)
	{
		int i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		times++;
	}
}
