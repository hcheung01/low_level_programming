#include <stdio.h>
/**
 * main - function with two arguments
 * @argc: int type 1st argument
 * @argv: pointer to array of strings
 *
 * Description: prints the number of arguments passed in it
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
