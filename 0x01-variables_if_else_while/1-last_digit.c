#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int i = n % 10;
	printf("Last digit of %d is \n", n);
	if (i  > 5)
	{
		printf("%d and is greater 5\n", i);
	}
	else
	{
		if (i < 6 && n != 0)
		{
			printf("%d and is less than 6 and not 0\n", i);
		}
		else
		{
			printf("%d and is 0", i);
		}
	}
	return (0);
}
