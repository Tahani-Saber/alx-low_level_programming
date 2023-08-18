#include "main.h"

/**
 * more_numbers - check the code
 *
 * Description: to print the numbers more times
 *
 * Return: void
*/

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
