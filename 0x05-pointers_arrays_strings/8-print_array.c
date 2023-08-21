#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: input array
 * @n: length of the array
 * Retun: Always 0
 */

void print_array(int *a, int n)
{
	int index_array;

	for (index_array = 0; index_array < n; index_array++)
	{
		printf("%d", a[index_array]);
		if (index_array != (n -1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
