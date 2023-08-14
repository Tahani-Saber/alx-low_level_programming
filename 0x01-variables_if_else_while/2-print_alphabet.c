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
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
