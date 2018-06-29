#include "stdio.h"
/**
 * main - primary function with for loop
 *
 * Description: for loop with if/else to print digits from 1 to 100
 * Return: na
 */
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0)
		{
			if (x % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		} else if (x % 5 == 0)
		{
			if (x == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		} else
			printf("%d ", x);
	}
}
