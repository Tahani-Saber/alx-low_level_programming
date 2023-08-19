#include "main.h"

/**
 * print_diagonal  - main function
 *
 * @n: the number of printing times
 *
*/

void print_diagonal(int n)
{
	int i, space;

	if (n >= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < n; i++)
		{
			for (space = 1; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar(\\);
			_putchar('\n');
		}
	}
}
