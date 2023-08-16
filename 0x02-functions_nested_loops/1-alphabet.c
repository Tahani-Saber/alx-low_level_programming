#include "main.h"

/**
 * main - check the code
 *
 * Description: to print the alphabet with new prototype
 *
 * Return: return 0
*/

void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
