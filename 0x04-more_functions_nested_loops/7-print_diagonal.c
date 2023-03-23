# include "main.h"

/**
 * print_diagonal - my func
 * Description: hello
 * @n: yo
 * Returns: number
 */

void print_diagonal(int n)
{
	int space_count = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (space_count < n)
	{
		int i = 0;

		while (i < space_count)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		space_count++;
	}
}
