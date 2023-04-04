#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
	int k, l;

	k = 0;

	while (k < 8)
	{
		l = 0;
		while (l < 8)
		{
			_putchar(a[k][l]);
			l++;
		}
		_putchar('\n');
		k++;
	}
}

