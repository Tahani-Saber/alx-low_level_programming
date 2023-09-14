#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int count;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (count = 0; count < n; count++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
