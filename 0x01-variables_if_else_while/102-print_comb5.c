#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: A C program
 *
 * Return: return 0
*/

int main(void)
{
	int i = 0, j = 0;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
