#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *accept_pos;

	for (i = 0; s[i]; ++i)
	{
		for (accept_pos = accept; *accept_pos; ++accept_pos)
		{
			if (s[i]  == *accept_pos)
				break;
		}
		if (!*accept_pos)
			break;
	}

	return (i);
}
