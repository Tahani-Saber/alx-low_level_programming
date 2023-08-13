#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of the program
 *
 * Description: A C program to print the last digit
 *
 * Return: return 0 (success)
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}
	else if (m < 6)
	{
		printf("Last digit of %d is %d and is less than 6", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	return (0);
}
