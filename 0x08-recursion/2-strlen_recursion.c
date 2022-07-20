#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		goto end;

	s++;
	return (1 + _strlen_recursion(s));

end:	return (0);
}
