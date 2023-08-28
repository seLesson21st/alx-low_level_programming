#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: String to be searched
 * @needle: to be located
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int strng;

	strng = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[strng] == needle[strng])
		{
			do {
				if (needle[strng + 1] == '\0')
					return (haystack);

				strng++;
			} while (haystack[strng] == needle[strng]);
		}
		haystack++;
	}
	return ('\0');
}
