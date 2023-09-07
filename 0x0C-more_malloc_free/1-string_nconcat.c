#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: parameter  first char
 * @s2: parameter secound char
 * @n: paratmeter unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, l, z;
	char *s;

	if (s1 == NULL)
	{
		m = 0;
	}
	else
	{
		for (m = 0; s1[m]; ++m)
		;
	}
	if (s2 == NULL)
	{
		l = 0;
	}
	else
	{
		for (l = 0; s2[l]; ++l)
		;
	}
	if (l > n)
		l = n;
	s = malloc(sizeof(char) * (m + l + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < m; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + m] = s2[z];
	s[m + l] = '\0';
	return (s);
}
