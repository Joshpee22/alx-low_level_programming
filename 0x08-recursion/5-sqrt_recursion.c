#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @a: input number.
 * @b: iterator.
 * Return: square root or -1.
 */
int power_operation(int a, int b)
{
	if (b % (a / b) == 0)

	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (0 + check(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (check(n, 2));
}

