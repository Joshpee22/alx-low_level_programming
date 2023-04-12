#include <stdio.h>
#include <stdlib.h>


/**
 * main - Print result of adding given arguments
 * @argc: Number of arguments
 * @argv: Arguments recieved
 *
 * Return: 0 on success, 1 if theres a nondigit arg
 */

int main(int argc, char *argv[])
{
	int total, i, j;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[i]);
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}

