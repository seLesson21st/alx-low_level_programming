#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory to be filled
 * @b: characted to be copied
 * @n: number of times to be copied
 * Return: pointer to mem s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
