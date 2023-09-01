#include "main.h"

/**
 * _isalpha - faction that checks for alphabets
 * @c: characters to be checked
 * Return: 1 if c is alphabetic, 0 if not
 */

int _isalpha(int c)
{
	return ((c > 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
