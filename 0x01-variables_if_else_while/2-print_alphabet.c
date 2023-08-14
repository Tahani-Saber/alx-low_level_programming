#include <stdio.h>
#include <ctype.h>

/**
 * main - start of the program
 *
 * Description: A c program to print the alphabet in lowercase
 *
 * Return: return 0 (success)
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
