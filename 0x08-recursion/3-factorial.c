#include "main.h"
/**
 * factorial - function that returns  the factorial or a given number
 * @n:int
 * Return:int
 * Return: x
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
