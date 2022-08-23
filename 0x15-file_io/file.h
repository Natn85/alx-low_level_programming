#ifndef _FILE_H
#define _FILE_H

#include "main.h"
/**
 * slen - string length
 * @s: string
 * Return: length
 */

__home int slen(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + slen(s));
}

/**
 * __exit - exit strategy
 * @error: error code
 * @s: string
 * @file_desc: file descriptor
 * Return: int
 */

__home int __exit(int error, char *s, int file_desc)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close file_desc %d\n", file_desc);
		exit(error);
	default:
		return (0);
	}
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

__home char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
		__exit(99, file, 0);

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @file_desc: The file descriptor to be closed.
 */

__home void close_file(int file_desc)
{
	int c;

	c = close(file_desc);

	if (c == -1)
		__exit(100, NULL, file_desc);
}
#endif
