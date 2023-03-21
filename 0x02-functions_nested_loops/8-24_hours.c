#include "main.h"

/**
 * jack_bauer - Hello
 * Description: world
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e;

	e = 58;
	a = '0';
	while (a < '3')
	{
		if (a == '2')
		{
			e = '4';
		}
		b = '0';
		while (b < e)
		{
			c = '0';
			while (c < '6')
			{
				d = '0';
				while (d < 58)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
