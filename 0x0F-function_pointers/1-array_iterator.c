#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Exceute a given action on each element of an array.
 * @array:The array of integers.
 * @size: The number os elements in the array.
 * @action: A function pointer that defines the action to perform
 * on each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
