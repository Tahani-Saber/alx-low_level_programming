#include "main.h"

/**
 * _strlen - clculate the string length
 * @s: describe the string length
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int i = 0;
	char str[1000];

	for (i = 0; str[i] != '\0'; ++i)
	;
	*s = i;
	return (*s);
}
