#include "main.h"

/**
 * _strlen - clculate the string length
 * @s: describe the string length
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; Str[i] != '\0'; ++i);

	*s = i;
	return (0);
}
