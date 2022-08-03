#ifndef _FUNCTION_POINTER_H
#define _FUNCTION_POINTER_H

/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to a func
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *));

#endif
