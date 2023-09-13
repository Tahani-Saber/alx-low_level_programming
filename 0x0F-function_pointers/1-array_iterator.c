#include "function_pointers.h"


/**
 * array_iterator - function to executes a function given
 * as a parameter on each element of an array
 * @array: frist argu array to excute the fun
 * @size: size of the array
 * @action: second argu function we need to excute
 * REturn: return void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		s = 0;
		while (s < size)
		{
			action(array[s]);
			s++;
		}
	}
}
