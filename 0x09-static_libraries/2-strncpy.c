#include "main.h"

/**
 * _strncpy - fanction that copies a string
 * @dest: destination to be copied
 * @src: Input value
 * @n: String to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
