#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a pointer to a function
 * @name: string to print
 * @f: pointer to function that prints the name
 *
 * Return: nothing
 */
void print_name(char *name, void(*f)(char*))
{
	if (name == NULL || f == NULL)
		return ;

	f(name);
}
