# include "main.h"

/**
 * more_numbers- my func
 * Description: hello
 * Returns: number
 */

void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			int num = i;

			if (i >= 10)
			{
				_putchar('1');
				num = i % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
