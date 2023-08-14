#include <stdio.h>
#include <ctype.h>

/**
 * main - start of the program
 *
 * Description: A c program to print the alphabet in lowercase
 *
 * return: return 0
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar('\n');
	}
	return (0);
}
