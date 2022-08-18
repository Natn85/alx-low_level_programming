#ifndef _COMM_H
#define _COMM_H

#include "main.h"

/**
 * slen - get string length
 * @s: string
 * Return: length
 */
__home int slen(const char *s)
{
	int len;

	for (len = 0; s[len];)
		len++;

	return (len);
}

/**
 * valid - validate a binary string
 * @s: string
 * Return: TRUE ? 1 : 0
 */
__home int valid(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] != '0' && s[i] != '1')
			return (0);

	return (1);
}

typedef unsigned int uint;
typedef unsigned long int ulint;

#endif
