#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source strng pointer
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
