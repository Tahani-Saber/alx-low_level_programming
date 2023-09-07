#include "main.h"

/**
 * create_array - create a an array of chars, and initializes it with a specific char
 * @size: the size of the arr
 * @c: the initial value of the arr 
 *
 * Return: return the pointer of the arr or NULL if it fail
*/

char *create_array(unsigned int size, char c)
{
	char* array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char);
	if (array == Null)
		return (Null);
	for (i = 0; i < size; i++)
	array[i] = a;

	return (array);

}
