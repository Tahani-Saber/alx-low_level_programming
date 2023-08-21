#include "main.h"

/**
 * swap_int - check the code
 * @a: the frist pointer
 * @b: the second pointer
 * Return: return void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
