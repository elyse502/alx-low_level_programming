#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: Always 0 or 1 when Done
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
}
return (0);
}


/**
 * main - will print program name
 * @argc: parameter count
 * @argv: parameter array
 * Description: prints program name
 * Return: Always 0 when Done
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, count;

		for (i = 1; i < argc; i++)
		{
			int temp_holder;

			if (!isInteger(argv[i]))
			{
				temp_holder = atoi(argv[i]);
				count += temp_holder;
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", count);
	}
	else
		printf("0\n");

	return (0);
}
