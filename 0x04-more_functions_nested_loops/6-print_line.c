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
	int in_num;

	if (in_num <= 0)
	{
		_putchar('\n');
		for (in_num = 1; in_num <= n; in_num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
