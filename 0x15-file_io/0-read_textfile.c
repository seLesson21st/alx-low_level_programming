#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: File to be read
 * @letters: The number of letters to be printed
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_x;
	ssize_t re, wr;
	char *screen;

	if (filename == NULL)
	{
		return (0);
	}
	file_x = open(filename, O_RDONLY);
	if (file_x == -1)
	{
		return (0);
	}
	screen = malloc(sizeof(char) * letters);
	if (screen == NULL)
	{
		close(file_x);
		return (0);
	}
	re = read(file_x, screen, letters);
	close(file_x);
	if (re == -1)
	{
		free(screen);
	}
	wr = write(STDOUT_FILENO, screen, re);
	free(screen);
	if (re != wr)
	{
		return (0);
	}
	return (wr);
}
