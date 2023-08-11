#include <stdio.h>

/**
 * main - Print the letters of the alphabet excluding q and e.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i==113)
		{
			i++;
			continue;
		}

			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
