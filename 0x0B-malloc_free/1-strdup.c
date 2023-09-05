#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: The character to be checked
 *  Return: a pointer to the duplicated string and
 *   NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strng;
	int x, i = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	strng = malloc(sizeof(char) * (x + 1));

			if (strng == NULL)
			return (NULL);
			for (i = 0; str[i]; i++)
			strng[i] = str[i];
			return (strng);
			}
