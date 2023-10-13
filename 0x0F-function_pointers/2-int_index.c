#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: Pointer to an array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to use.
 *
 * Return: The index of the first matching element if found; -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
