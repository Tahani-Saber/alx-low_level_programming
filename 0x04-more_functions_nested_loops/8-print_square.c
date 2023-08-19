#include "main.h"

/**
 * print_square - start of the prog
 *
 * @size: prameter express the size of the square
 *
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
