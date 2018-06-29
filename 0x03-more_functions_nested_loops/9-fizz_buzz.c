#include "stdio.h"
/**
 * main - primary function with for loop
 *
 * Description: for loop with if/else to print digits from 1 to 100
 * Return: na
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i ", i);
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
	}
	printf("\n");
}
