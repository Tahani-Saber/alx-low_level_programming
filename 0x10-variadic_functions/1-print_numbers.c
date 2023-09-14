#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
		if (count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
