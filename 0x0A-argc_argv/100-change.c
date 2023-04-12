#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Find the smallest number of coins to make an amount of change
 * @argc: Arg count
 * @argv: Contains all arguments
 *
 * Return: 1 on error, 0 for success
 */
int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	count = 0;

	while (total > 1)
	{
		for (i = 0; i < sizeof(cents[i]); i++)
		{
			if (total >= cents[i])
			{
				count += total / cents[i];
				total = total % cents[i];
			}
		}
	}
	if (total == 1)
		count++;

	printf("%d\n", count);
	return (0);
}
