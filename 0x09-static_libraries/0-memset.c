#include "main.h"

/**
 * _memset - function thats fills a block of memory
 * @s: The starting address
 * @b: value desired
 * @n: The number of bytes
 * Return: The changed array plus new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (n > 0; x++;)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
