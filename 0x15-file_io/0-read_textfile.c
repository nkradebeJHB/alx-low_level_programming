#include "main.h"
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
	char *buffer;
	ssize_t openfile, readfile, writefile;

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	if (filename == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	readfile = read(openfile, buffer, letters);
	writefile = write(STDOUT_FILENO, buffer, readfile);

	if (openfile == -1 || readfile == -1 || writefile != readfile)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openfile);

	return (writefile);
}
