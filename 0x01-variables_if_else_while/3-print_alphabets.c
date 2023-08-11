#include <stdio.h>
/**
 * main - Print all aphabet letters in lowercase then in upper case.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;
	int b = 65;

	while
		(i <= 122) {
			putchar(i);
			i++;
		}
	while
		(b <= 90) {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
