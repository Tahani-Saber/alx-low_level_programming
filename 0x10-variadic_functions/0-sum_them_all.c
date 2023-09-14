#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all parameters
 * of numbers
 * @n: the fixed argument of our variadic function
 *
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int i;
	
	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);
			
			s += x;
		}
		va_end(args);
		return (s);
	}
	if (n == 0)
		return (0);
}
