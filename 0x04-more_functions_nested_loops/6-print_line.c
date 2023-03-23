# include "main.h"

/**
 * print_line - my func
 * Description: hello
 * @n: yo
 * Returns: number
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
