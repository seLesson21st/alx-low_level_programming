#include "main.h"
#include <stdio.h>

/**
 * _atoi -  program that multiplies two numbers
 * @s: The string to be converted
 * Return: int from the string
 */
int _atoi(char *s)
{
	int a, b, c, lgth, f, num;

	a = 0;
	b = 0;
	c = 0;
	lgth = 0;
	f = 0;
	num = 0;

	while (s[lgth]  != '\0')
		lgth++;
	while (a < lgth && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
/**
 * main - function that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of argumrnts
 * Return: always 0 or 1 for error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 1)
	{
		printf("error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
