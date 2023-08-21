#include "main.h"

/**
 * _strlen - clculate the string length
 * @s: describe the string length
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
