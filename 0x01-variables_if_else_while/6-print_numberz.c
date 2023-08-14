#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: A C program to print the single digits with putchar
 *
 * Return: return 0
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(48 + x);
	}
	putchar('\n');
	return (0);
}
