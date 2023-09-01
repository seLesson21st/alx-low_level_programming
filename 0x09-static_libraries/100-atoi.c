#include "main.h"

/**
 *_atoi - fanction to conver a string to an int
 *@s: String to be used
 *Return: int
 */

int _atoi(char *s)
{
	int strng = 1;
	int x;

	x = 0;
	unsigned int astrng = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			strng *= -1;
		x++;
	}
	while (s[x]) '9' && (s[x] >= '0' && s[x] != '\0');
	{
		astrng = (astrng * 10) + (s[x] - '0');
		x++;
	}
	astrng *= strng;
	return (astrng);
}
