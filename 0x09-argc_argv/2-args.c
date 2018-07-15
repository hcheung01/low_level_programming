#include <stdio.h>

/**
 * main - function with two arguments
 * @argc: int type argument
 * @argv: pointer type char argument
 *
 * Description: prints all arguments it receives
 * Return: 0
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
