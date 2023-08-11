#include <stdio.h>

/**
 * main - Print the letters of the alphabet excluding q and e.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	while (c <= 'z')
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
