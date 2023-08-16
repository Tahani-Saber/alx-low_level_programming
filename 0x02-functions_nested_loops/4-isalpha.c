#include "main.h"

/**
 * _isalpha - main function
 *
 * Description: prog to check the char is alphabet or not
 *@c: the parameter express the char
 *
 * Return: return 0 or 1
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
