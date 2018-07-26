#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function with two arguments
 * @argc: argument count
 * @argv: pointer to struct
 *
 * Description: print output of 2 arguments
 * Return: 0
 */
int main(int argc, char **argv)
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
