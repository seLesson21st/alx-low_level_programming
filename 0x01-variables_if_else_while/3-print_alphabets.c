#include <stdio.h>
/**
 * main - Print all aphabet letters in lowercase then in upper case.
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
