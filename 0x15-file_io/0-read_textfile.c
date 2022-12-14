#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: the number of letters it should read and print.
 * Return: 0 if the file can not be open or read or
 * filename is NULL or write fails or does not write
 * the expected amount of bytes, else returns
 * the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t readfile, openfile, writefile;

	if (filename == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	if (openfile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	readfile = read(openfile, buffer, letters);

	writefile = write(STDOUT_FILENO, buffer, readfile);

	if (readfile == -1 || writefile == -1 || writefile != readfile)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openfile);

	return (writefile);
}
