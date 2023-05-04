#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */
int get_endianness(void)
{
	int tmp = 1;
	char *endian = (char *)&tmp;

	return ((int)*endian);
}
