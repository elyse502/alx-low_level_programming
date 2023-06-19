#include "main.h"

/**
 * _isupper - my function
 * @c: arguments
 * Description: the description
 * Return: hello
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
