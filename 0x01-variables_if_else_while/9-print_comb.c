#include <stdio.h>

/**
 * main - start of the prog
 *
 * Description: A C program to print combination of nums
 *
 * Return: return 0
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar('\, ');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
