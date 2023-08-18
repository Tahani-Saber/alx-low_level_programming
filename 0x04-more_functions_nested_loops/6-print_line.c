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
	for (n != 0)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
