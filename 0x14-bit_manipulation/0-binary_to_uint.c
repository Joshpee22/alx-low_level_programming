#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: The pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		tmp <<= 1;
		tmp += *b++ - '0';
	}

	return (tmp);
}
