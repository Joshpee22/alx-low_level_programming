#include "main.h"

/**
  * _strchr - locates a character in a string
  * of the character c in the string s, or NULL if the character is not found
  *
  * @c: character targeted
  * @s: The string targeted
  * Return: returns a pointer to the first occurence of c
  */
char *_strchr(char *s, char c)
{
	int i;
	do {
		if (s[i] == c)
			return (s);
	} while (*s++);
	return (0);
}
