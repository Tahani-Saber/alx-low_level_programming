#include "function_pointers.h"

/**
 * print_name -function to print the person name
 * @name: the first parameter person name
 * @f: the second parameter function of the name
 *
 * Return: return void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
