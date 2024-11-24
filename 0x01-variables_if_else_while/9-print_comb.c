#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	for (int num = 0; num < 10; num++)
	{
		printf("%i", num);
		if (num != 9)
			printf(",");
	}
	printf("\n");
	return (0);
}
