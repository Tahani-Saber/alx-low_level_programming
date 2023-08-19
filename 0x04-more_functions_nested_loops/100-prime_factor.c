#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Bwave ICT / Bright Daniel
 * Return: always 0
 **/

int main()
{
	long long n = 612852475143;
	int i;

	for (i = 2; i <= n; i++)
	{
 		while (n % i == 0)
		{
 			n /= i;
		}
	}

	printf("Largest prime factor is %d\n", i);

	return 0;
}
