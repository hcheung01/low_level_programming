#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	printf("Last digit of %d is ", n);

	if (i  > 5)
	{
		printf("%d and is greater 5\n", i);
	}
	else
	{
		if (i < 6 && i != 0)
		{
			printf("%d and is less than 6 and not 0\n", i);
		}
		else
		{
			printf("%d and is 0\n", i);
		}
	}
	return (0);
}
