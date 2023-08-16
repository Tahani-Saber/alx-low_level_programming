#include "main.h"

/**
 * main - start of the prg
 *
 * Description: A c program to prnt text with specific prototype
 *
 * Return: return 0
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
