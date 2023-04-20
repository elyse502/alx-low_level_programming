#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints a char.
  *@format: Represents the list of all arguments passed to the function.
  *
  *Return: void(Nothing).
  */
void print_all(const char * const format, ...)
{
	unsigned int index;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	index = 0;
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				index++;
				continue;
		}
		separator = ", ";
		index++;
	}

	printf("\n");
	va_end(args);
}
