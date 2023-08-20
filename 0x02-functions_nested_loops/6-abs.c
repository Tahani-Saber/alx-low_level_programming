#include "main.h"
#define CHAR_BIT 8

/**
 * _abs  -  start of the program
 *
 * Description: This function will return absolute value of n
 * @n: the input number
 *
 */

int _abs(int)
{
	int const mask = n >> (sizeof(int) * CHAR_BIT - 1);

	return ((n + mask) ^ mask);
}
