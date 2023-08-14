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

	for (x = 0; x < 10 ; x++)
	{
		putchar(x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
