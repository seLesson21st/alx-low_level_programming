#include "main.h"
#include<stdlib.h>

/**
 * create_array - unction that creates an array of char
 *  and initializes it with a specific char
 *  @size: The size of array
 *  @c: The character to be assigned
 *  Return: The pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *strng;
	unsigned int x;

	strng = malloc(sizeof(char) * size);
	if (size == 0 || strng == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		strng[x] = c;
	return (strng);
}
