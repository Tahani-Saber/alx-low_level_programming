#include "main.h"

/**
 * print_sign - main function
 *
 * Description: prog to check the sign of the number
 *@n: the parameter express the number
 *
 * Return: return 0 or 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
