#include <stdio.h>
#define false 0
#define true 1
/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int num, i, j, k;

	for (num = 0; num <= 98; num++)
	{
		for (i = num + 1; i <= 99; i++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (num == 98 && i == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
