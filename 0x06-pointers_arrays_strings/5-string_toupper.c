#include "main.h"

/**
 * string_toupper -  changes lowercase to uppercase
 * @str: Pointer
 * Return: str
 */

char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
		str++;
	}
	return (str);
}
