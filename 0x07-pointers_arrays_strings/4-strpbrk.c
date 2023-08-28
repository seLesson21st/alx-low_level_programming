#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Set of bytes to be searched
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * if non is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int strng;

	while (*s)
	{
		for (strng = 0; accept[strng]; strng++)
		{
			if (*s == accept[strng])
				return (s);
		}
		s++;
	}
	return ('\0');
}
