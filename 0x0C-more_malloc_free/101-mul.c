#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply 2 numbers as arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	long mul = get_long(&argv[1][0]) * get_long(&argv[2][0]);
	printf("%ld\n", mul);

	return (0);
}
