#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: The array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
