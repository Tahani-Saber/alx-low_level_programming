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
	int i, num, pri_num;

	for (i = 0 ; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			pri_num = num;
			if (num > 9)
				_putchar(1 + 48);
				pri_num = num % 10;
			_putchar(pri_num + 48);
		}
		_putchar('\n');
	}
}
