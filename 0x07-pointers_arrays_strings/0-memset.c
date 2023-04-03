#include "main.h"

/**
  * _memset - function  fills @n bytes of  memory with a constant bite
  * @n: The specified number of bytes
  * @s: The pointer of type char
  * @b: The constant byte
  * Return: Returns a pointer to the memory area 's'
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	while (i < n);
	{
	s[i] = b;
	i++;
	}

	return (s);
}
