#include "main.h"

/**
 * print_number - Print an integer number
 * @n: integer
 */
void print_number(int n)
{

	unsigned int tens, dig;
	double temp_tens = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		while (temp_tens <= n)
			temp_tens *= 10;
		tens = temp_tens / 10;

		while (tens >= 1)
		{
			dig = n / tens;
			_putchar(dig + '0');
			n -= (tens * dig);
			tens /= 10;
		}
	}
}
