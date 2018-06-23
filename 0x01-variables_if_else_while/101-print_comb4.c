#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (k = '0'; k <= '7'; k++)
	{
		for (i = k + 1; i <= '8'; i++)
		{
			for (j = i + 1; j <= '9'; j++)
			{
				putchar(k);
				putchar(i);
				putchar(j);

				if (j < '9' || i < '8' || k < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
