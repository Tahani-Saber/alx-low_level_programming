#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all parameters
 * of numbers
 * @n: the fixed argument of our variadic function
 *
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	 int s = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
