/**
 * _isdigit - my function
 * @c: arguments
 * Description: the description
 * Return: hello
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
