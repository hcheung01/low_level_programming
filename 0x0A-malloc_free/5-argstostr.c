#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed
 * @argv: the given arguments
 *
 * Return: 0 if success, 1 if not
 */
int main(int argc, char *argv[])
{
	int c1, c2;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (c1 = 1; c1 < argc; c1++)
	{

		for (c2 = 0; argv[c1][c2] != '\0'; c2++)
			if (!isdigit(argv[c1][c2]))
			{
				printf("Error\n");
				return (1);
			}
		result = result + atoi(argv[c1]);
	}
	printf("%i\n", result);
	return (0);
}
