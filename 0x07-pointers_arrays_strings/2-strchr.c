#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 * Return: Pointer to the first occurrence if C is found,
 * NULL if C is not found
 */

char *_strchr(char *s, char c)
{
	int strng;

	for (strng = 0; s[strng] >= '\0'; strng++)
	{
		if (s[strng] == c)
			return (s + strng);
	}
	return ('\0');
}
