#include "main.h"

/**
 * print_most_numbers - print 0 - 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		if ( i == 2 || i == 4)
			continue;

		x = i < 10 ? (i + '0') : '\n';
		_putchar(x);
	}
}
