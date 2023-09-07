#include "main.h"
#include<stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: The num of bytes to be allocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);
}
