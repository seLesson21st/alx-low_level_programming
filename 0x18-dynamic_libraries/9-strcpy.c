#include "main.h"

/**
 * _strcpy - function that copies a string pointed by src
 * @dest: destination of copied string
 * @src: copied from
 * Return: The string value
 */

char *_strcpy(char *dest, char *src)
{
	char x = 0;
	char y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
