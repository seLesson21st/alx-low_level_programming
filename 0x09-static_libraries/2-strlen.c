#include "main.h"

/**
 * _strlen - faction that returns length of a string
 * @s: String to be counted
 * Return: length
 */

int _strlen(char *s)
{
	int lnth = 0;

	while (*s != '\0')
	{
		lnth++;
		s++;
	}
	return (lnth);
}
