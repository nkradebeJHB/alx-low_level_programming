#include "main.h"

/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: if success returns 1, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int openfile, writefile, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writefile = write(openfile, text_content, len);

	if (openfile == -1 || writefile == -1)
		return (-1);

	close(openfile);
	return (1);
}
