#include "main.h"

/**
 * _strpbrk - fanction that breaks a string
 * @s: Input value
 * @accept: Inputed value
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
