#include "coding.h"

/**
 * main - primary function
 *
 * Description: print string "Coding"
 * using a while loop over the array
 * Return: 1 if the number is positve. 0 otherwise
 */
int main(void)
{
	int c;
	char cString[10] = "Coding\n";

	while (c < 10)
	{
		_putchar(cString[c]);
		c++;
	}
	return (0);
}
