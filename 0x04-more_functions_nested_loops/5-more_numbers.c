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

	for (i = 0 ; i < 10; i++)
	{
		for (num = 0; num <= 14; n++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
		}
		_putchar('\n');
 
	}
}
