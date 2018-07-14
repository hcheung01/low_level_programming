#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two argument
 * @argc: int type argument
 * @argv: char pointer type argument
 *
 * Description: adds positive numbers
 * Return: sum value
 */
int main(int argc, char* argv[])
{
	int i, sum;

	if(argc > 2)
	{
		for(i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
}
