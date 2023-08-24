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
		if (str[j] >= 96 && str[j] < 123)
		{
			str[j] -= 32;
		}
		j++;
	}
	return (str);
}
