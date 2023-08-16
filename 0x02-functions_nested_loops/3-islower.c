#include "main.h"

/**
 * _islower  - entry point
 *
 * Description: prog to check the char is lowercase or not
 * @c: the parameter c will express the char
 *
 * Return: return 0 or one
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
