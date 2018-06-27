#include "holberton.h"

/**
 * main - primary function
 *
 * Description: print string "Holberton"
 * using a while loop over the array
 * Return: 1 if the number is positve. 0 otherwise
 */
int main(void)
{
	int c;
	char cString[10] = "Holberton\n";

	while (c < 10)
	{
		_putchar(cString[c]);
		c++;
	}
	return (0);
}
