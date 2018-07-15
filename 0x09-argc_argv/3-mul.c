#include <stdio.h>
#include <stdlib.h>
/**
 * main - function with two arguments
 * @argc - int type argument
 * @argv - char pointer array type argument
 *
 * Description: prints the result of the multiplication
 * Return: 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
		printf("Error\n");
		return (1);
}
