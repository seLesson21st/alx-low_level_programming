#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: To be created.
 * @text_content: the content for be included in file.
 * Return: 1 id successful, -1 if error.
 */

int create_file(const char *filename, char *text_content)
{
	int file_x;
	int wr;
	int wrte;

	if (!filename)
	{
		return (-1);
	}
	file_x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_x == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (wr = 0; text_content[wr]; wr++)
		;
	wrte = write(file_x, text_content, wr);
	if (wrte == -1)
	{
		return (-1);
	}
	close(file_x);
	return (1);
}
