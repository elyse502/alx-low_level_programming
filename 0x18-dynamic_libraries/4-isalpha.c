#include "main.h"

/**
 * _isalpha - main fuction
 * Description: my description
 * @c: my argument
 * Return: 0
 */

int _isalpha(int c)
{
	int a, b;

	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return (1);
		} else if (0 == 0)
		{
			for (b = 65; b <= 90; b++)
			{
				if (c == b)
				{
					return (1);
				}
			}
		}
	}
	return (0);
}
