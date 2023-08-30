#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: String to be measured
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int strng;

	strng = 0;
	if (*s)
	{
		strng++;
		strng += _strlen_recursion(s + 1);
	}
	return (strng);
}
