#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - reset the value of a pointer to 98
 * @n: integer pointer
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swap two integers
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - get a string length
 * @s: character pointer
 *
 * Return: integer len
 */
int _strlen(char *s);

/**
 * _puts - print to the stdout
 * @str: string
 *
 * Return: void
 */

void _puts(char *str);

#endif
