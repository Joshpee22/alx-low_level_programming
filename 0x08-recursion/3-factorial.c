25 lines (23 sloc)  243 Bytes
#include "main.h"
/**
 * factorial - function that returns  the factorial or a given number
 * @n:int
 * Return:int
 */
int factorial(int n);

{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

