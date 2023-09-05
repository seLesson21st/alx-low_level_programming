#include "main.h"
#include<stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: s1 and s2 and NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *strng;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	strng = malloc(sizeof(char) * (x + y + 1));

	if (strng == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		strng[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		strng[x] = s2[y];
		x++;
		y++;
	}
	strng[x] = '\0';
	return (strng);
}
