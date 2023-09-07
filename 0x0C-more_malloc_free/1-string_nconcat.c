#include "main.h"
#include<stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: The first string
 * @s2: the second string
 * @n: Elements to be concatenates
 * Return: Pointer to the new aloocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *c;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y] != '\0'; y++)
			;
	}
	if (y > n)
		y = n;
	c = malloc(sizeof(char) * (x + y + 1));
	if (c == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		c[z] = s1[z];
	for (z = 0; z < y; z++)
		c[z + x] = s2[z];
	c[x + y] = '\0';
	return (c);
}
