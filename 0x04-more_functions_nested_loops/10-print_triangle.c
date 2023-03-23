# include "main.h"

/**
 * print_triangle - my func
 * Description: hello
 * @size: yo
 * Returns: number
 */

void print_triangle(int size)
{
	int prints;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (prints = 0; prints < size; prints++)
	{
		int x = size - prints;

		while (--x)
		{
			_putchar(' ');
		}
		for (x = 0; x <= prints; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
