#include "main.h"

/**
 * main - check the code
 *
 * Description: a program to print text instead of specific numbers
 *
 * Return: return 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			_putchar("Fizz");
		else if (i % 5 == 0)
			_putchar("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			_putchar("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0)
}