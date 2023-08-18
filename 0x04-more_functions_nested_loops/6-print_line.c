#include "main.h"

/**
 * print_line - start of the prog
 *@n: is the parameter of the function
 * Description: A c program to print line
 *
 * Return: return void
*/

void print_line(int n)
{
	int num;

	if (num <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
			_putchar('_');
		_putchar('\n');
	}
}
