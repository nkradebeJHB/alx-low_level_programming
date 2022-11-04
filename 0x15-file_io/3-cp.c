#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buffer - Allocate bytes
 * @filename: A pointer to the name of the file storing chars.
 * Return: A pointer to the newly-allocated buffer.
 */
char *buffer(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file to be closed
 */
void close_file(int fd)
{
	int closefile;

	closefile = close(fd);

	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: argument count
 * @argv: pointer to pointer vector array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int original, copy, readfile, writefile;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buffer(argv[2]);
	original = open(argv[1], O_RDONLY);
	readfile = read(original, buf, 1024);
	copy = open(argv[2], O_CREAT |O_WRONLY | O_TRUNC, 0664);

	do {
		if (original == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		writefile =write(copy, buf, readfile);
		if (copy == -1 ||writefile == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		readfile = read(original, buf, 1024);
		copy = open(argv[2], O_WRONLY | O_APPEND);
	} while (readfile > 0);

	free(buf);
	close_file(original);
	close_file(copy);

	return (0);
}
