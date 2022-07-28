#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j;
	size_t num;

	num = (size_t) n >= strlen(s2) ? strlen(s2) : n;
	if (num < 0)
		return (NULL);

	if (!s1)
		s1 = EMPTY;

	if (!s2)
		s2 = EMPTY;

	s = malloc(sizeof(*s) * (num + 1 + strlen(s1)));

	if (!s)
		return (NULL);

	for (i = 0; s1[i] != END; i++)
		s[i] = s1[i];

	for (j = 0; j < (int) n && s2[j] != END; j++)
		s[i + j] = s2[j];

	s[i + j] = END;

	return (s);
}
