#include "main.h"

/**
 * _isupper - function for uppercase letters
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
