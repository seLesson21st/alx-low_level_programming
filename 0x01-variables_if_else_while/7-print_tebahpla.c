#include <stdio.h>

/**
 * main - Print lowercase in revers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	for (c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
