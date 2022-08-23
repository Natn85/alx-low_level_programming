#include "file.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: -
 * @argv: -
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int f_desc_1, f_desc_2, r, w;
	char *buffer;

	if (argc != 3)
		__exit(97, NULL, 0);

	buffer = create_buffer(argv[2]);
	f_desc_1 = open(argv[1], O_RDONLY);
	r = read(f_desc_1, buffer, 1024);
	f_desc_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_desc_1 == -1 || r == -1)
		{
			free(buffer);
			__exit(98, argv[1], 0);
		}

		w = write(f_desc_2, buffer, r);
		if (f_desc_2 == -1 || w == -1)
		{
			free(buffer);
			__exit(99, argv[2], 0);
		}

		r = read(f_desc_1, buffer, 1024);
		f_desc_2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(f_desc_1);
	close_file(f_desc_2);

	return (0);
}
