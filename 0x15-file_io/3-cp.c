#include "main.h"

/**
 * creates_buffer - Function that allocates bytes for a buffer.
 * @dest: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *creates_buffer(char *dest)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @d: The file descriptor to be closed.
 */
void close_file(int d)
{
	int x;

	x = close(d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
 * main -  function copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int foor, tow, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = creates_buffer(argv[2]);
	foor = open(argv[1], O_RDONLY);
	r = read(foor, buffer, 1024);
	tow = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (foor == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(tow, buffer, r);
		if (tow == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(foor, buffer, 1024);
		tow = open(argv[2], O_WRONLY | O_APPEND);

	}
	while (r > 0);

	free(buffer);
	close_file(foor);
	close_file(tow);

	return (0);
}

