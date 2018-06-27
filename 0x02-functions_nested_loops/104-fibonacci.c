#include <stdio.h>

/**
 * main - primary function
 *
 * Description: fibonnaci number first 98
 * Return: nothin
 */
int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;

	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%lu", c);

		if (c < 5035488507601418376)
			printf(", ");
	}
}
