#include "main.h"

/**
 * _memcpy - fanction that copies memory
 * @dest: destination to be stored
 * @src: Memory to be copied
 * @n: The number of bytes
 * Return: The copied memory with n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
