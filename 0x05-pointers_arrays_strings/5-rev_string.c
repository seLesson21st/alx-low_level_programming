#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length, a, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++);
	a = 0;

	half = length / 2;

	while(half--)
	{
		temp = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = temp;
		a++;
	}
}
