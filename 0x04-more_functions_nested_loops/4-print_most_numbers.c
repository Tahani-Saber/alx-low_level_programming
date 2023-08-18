#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Description: a program to print numbs and skip some
 *
 * REturn: voidd
*/

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		else
			_putchar(num);
	}
}
