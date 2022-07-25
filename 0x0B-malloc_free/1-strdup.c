#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: string
 *
 * Return: pointer to space in memory or NULL
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	len = strlen(str);
	s = malloc(sizeof(char) * len + 1);

	if (!s || !str)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	s[i] = END;

	return (s);
}
