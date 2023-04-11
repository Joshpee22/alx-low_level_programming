#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string
 * @str: string to be duplicated
 * Return: Null if fail
 * Pointer if successful
 */

char *_strdup(char *str)
{
	char *pdup;
	int a;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		len++;

	pdup = malloc(sizeof(char) * (len + 1));

	if (pdup == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		pdup[a] = str[a];
	pdup[len] = '\0';

	return (pdup);
}
