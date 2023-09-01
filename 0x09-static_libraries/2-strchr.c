#include "main.h"

/**
 * _strchr - function that searches for a character
 * @s: Input value
 * @c: input value
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
