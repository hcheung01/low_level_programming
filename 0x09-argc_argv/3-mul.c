#include <stdio.h>
#include <stdlib.h>
/**
 * main - function with two arguments
 * @argc: int type argument
 * @argv: char pointer array type argument
 *
 * Description: prints the result of the multiplication
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
