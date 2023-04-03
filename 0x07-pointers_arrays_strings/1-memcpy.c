#include "main.h"

/**
  * _memcpy -function  copies @n bytes from memory area @src
  * to memory area @dest
  * @n:function copies
  * @src: the memory area
  * @dest: the memory area copied to
  *Return: returns a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
