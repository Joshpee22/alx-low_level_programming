#include <stdio.h>

/**
 * main - Print all arguments received
 * @argc: Number of arguments
 * @argv: Arguments received
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
