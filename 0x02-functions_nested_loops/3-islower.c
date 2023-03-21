#include "main.h"

/**
 * _islower - main fuction
 * Description: my description
 * @c: my argument
 * Return: 0
 */

int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
