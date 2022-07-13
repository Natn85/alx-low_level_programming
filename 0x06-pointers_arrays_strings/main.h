#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2);

#endif
