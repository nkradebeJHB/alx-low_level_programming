#include"main.h"
/**
 * append_text_to_file - program that copies the content of a file
 * to another file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openfile = open(filename, O_WRONLY | O_APPEND);
	writefile = write(openfile, text_content, len);

	if (openfile == -1 || writefile == -1)
		return (-1);

	close(openfile);
	return (1);
}
