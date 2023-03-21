#include <stdlib.h>
#include "main.h"

/**
 * times_table - main fuction
 * Description: my description
 * Return: 0
 */

void times_table(void)
{
	int ref, index;

	for (ref = 0; ref <= 9; ref++)
	{
		for (index = 0; index <= 9; index++)
		{
			int  num = index * ref;

			int first_num = (num - (num % 10)) / 10;

			if (first_num != 0)
			{
				_putchar(first_num + '0');
			}
			_putchar(num % 10 + '0');
			if (index < 9)
			{
				_putchar(',');
				if ((index + 1) * ref < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
