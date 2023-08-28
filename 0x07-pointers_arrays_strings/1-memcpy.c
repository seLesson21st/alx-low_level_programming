#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: from memory area
 * @n: function copies
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
