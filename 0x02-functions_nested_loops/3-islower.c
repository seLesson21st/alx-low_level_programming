#include "main.h"

/**
 * _islower - Checks for lower case letters
 * @c: The cgaracter to be checked
 * Return: 1 for lowercase letters or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
