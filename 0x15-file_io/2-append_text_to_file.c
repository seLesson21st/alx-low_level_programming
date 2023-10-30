#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: File to be corrected
 * @text_content: Text to be added or removed
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_x;
	int wrte;
	int wr;

	if (!filename)
	{
		return (-1);
	}
	file_x = open(filename, O_WRONLY | O_APPEND);
	if (file_x == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (wr = 0; text_content[wr]; wr++)
			;
		wrte = write(file_x, text_content, wr);
		if (wrte == -1 || wr == -1)
		{
			return (-1);
		}
	}
	close(file_x);
	return (1);
}
