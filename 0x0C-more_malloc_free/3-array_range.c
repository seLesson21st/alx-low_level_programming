#include "main.h"
#include<stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: mnimum range of array
 * @max: maximum range of array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, b;
	int *x;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	x = malloc(sizeof(int) * b);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		x[a] = min;
		min++;
	}
	return (x);
}
