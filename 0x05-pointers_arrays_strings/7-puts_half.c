#include "main.h"

/**
 * puts_half - print half a string
 * @str: character pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, end;

	len = strlen(str) - 1;

	if (len % 2 == 0)
		i = 0, end = len / 2;
	else
		i = len / 2, end = len;
	
	while (i <= end)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
