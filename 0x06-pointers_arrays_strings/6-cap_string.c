#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer changed string
 */

char *cap_string(char *str)
{
	int word = 0;

	while (str[word])
	{
		while (!(str[word] >= 'a' && str[word] <= 'z'))
			word++;
		if (str[word - 1] == ' ' ||
				str[word - 1] == '\t' ||
				str[word - 1] == '\n' ||
				str[word - 1] == ',' ||
				str[word - 1] == ';' ||
				str[word - 1] == '.' ||
				str[word - 1] == '!' ||
				str[word - 1] == '?' ||
				str[word - 1] == '"' ||
				str[word - 1] == '(' ||
				str[word - 1] == ')' ||
				str[word - 1] == '(' ||
				str[word - 1] == '(' ||
				word == 0)
			str[word] -= 32;
		word++;
	}
	return (str);
}
