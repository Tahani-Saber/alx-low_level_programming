#include "main.h"
#include <string.h>

/**
 * _strlen - clculate the string length
 * @s: describe the string length
 *
 * Return: 0
*/

int _strlen(char *s)
{
	char Str[1000];
	int i = 0;

	for (i = 0; Str[i] != '\0'; ++i)
	;
	*s = i;
	return (*s);
}
