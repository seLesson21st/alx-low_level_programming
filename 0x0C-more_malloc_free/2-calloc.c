#include "main.h"
#include<stdlib.h>

/**
 * *_calloc - function that allocates memory for an array using malloc
 * @nmemb: The number of block of memory
 * @size: Integer size of memory
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		c[x] = 0;
	return (c);
}
