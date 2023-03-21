/*
 * File: 1-alphabet.c
 * Auth: Joshpee22
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char one;

	for (one = 'a'; one <= 'z'; one++)
		_putchar(one);

	_putchar('\n');
}
