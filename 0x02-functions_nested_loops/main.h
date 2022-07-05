#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void);

/**
 * _islower - check for lower case character
 * @c: integer input
 *
 * Return: 0 (Lowercase) 1 (Otherwise)
 */

int _islower(int c);

/**
 * _isalpha - check for aphabetic character
 *@c: input character
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isalpha(int c);

#endif
