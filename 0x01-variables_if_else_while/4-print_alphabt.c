#include <stdio.h>
#include <ctype.h>

/**
 * main - start of the program
 *
 * Description: A C program to print the alphabet skippig letters
 *
 * Return: return 0
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != 'E' && x != 'Q')
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
