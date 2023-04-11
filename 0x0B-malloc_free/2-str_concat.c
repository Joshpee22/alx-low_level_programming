#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *p_str;
	int d, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d = 0; s1[d] || s2[d]; d++)
		len++;

	p_str = malloc(sizeof(char) * len);

	if (p_str == NULL)
		return (NULL);

	for (d = 0; s1[d]; d++)
		p_str[index++] = s1[d];

	for (d = 0; s2[d]; d++)
		p_str[index++] = s2[d];

	return (p_str);
}
