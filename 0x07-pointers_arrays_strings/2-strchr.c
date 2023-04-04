#include "main.h"

/**
  * _strchr - locates a character in a string
  * of the character c in the string s, or NULL if the character is not found
  *
  * @c: character targeted
  * @s: The string targeted
  * Return: returns a pointer to the first occurence of c
  */
#include "main.h"

char *_strchr(char *s, char c)
{
	for ( ; *s; ++s)
	{
		if (*s == c)
			return (s);
	}
	return (*s == c ? s : NULL);
}

