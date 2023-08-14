#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: A C program to print the alphabet in reverse
 *
 * Return: return 0
*/

int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
