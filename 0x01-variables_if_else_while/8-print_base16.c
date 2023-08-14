#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: A C program to print the hexadecimal
 *
 * Return: return 0
*/

int main(void)
{
	char c;
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

