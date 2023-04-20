#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Represents the number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Always 0(Success).
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int count, sum = 0;

	va_start(nums, n);

	for (count = 0; count < n; count++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
