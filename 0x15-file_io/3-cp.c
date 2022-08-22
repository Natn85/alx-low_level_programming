#include "file.h"

/**
 * main - entry point
 * @argc: -
 * @argv: -
 * Return: 0 (success), 97-100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int f_desc_1, f_desc_2, _read, _write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	f_desc_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_desc_2 == -1)
		__exit(99, argv[2], 0);

	f_desc_1 = open(argv[1], O_RDONLY);
	if (f_desc_1 == -1)
		__exit(98, argv[1], 0);

	while ((_read = read(f_desc_1, buffer, 1024)) != 0)
	{
		if (_read == -1)
			__exit(98, argv[1], 0);

		_write = write(f_desc_2, buffer, _read);
		if (_write == -1)
			__exit(99, argv[2], 0);
	}

	close(f_desc_2) == -1 ? (__exit(100, NULL, f_desc_2)) : close(f_desc_2);
	close(f_desc_1) == -1 ? (__exit(100, NULL, f_desc_1)) : close(f_desc_1);
	return (0);
}
