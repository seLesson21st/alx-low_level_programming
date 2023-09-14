#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: The array to be inspected
 * @size: The size of the array
 * @action: Pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
