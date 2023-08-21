#include "main.h"

/**
 * print_rev - check the code
 * @s: the function parameter
 *
 * Return: return void
*/

void print_rev(char *s)
{
	int count, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (count = i - 1; count >= 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
