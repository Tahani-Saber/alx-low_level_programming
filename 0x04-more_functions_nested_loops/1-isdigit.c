#include "main.h"

/**
 * _isdigit - check if the number is digit
 *
 * @c: is the parameter of the function
 *
 * Return: 0 , 1 it's depend on the input
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
