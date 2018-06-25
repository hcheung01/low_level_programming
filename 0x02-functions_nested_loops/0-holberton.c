#include "holberton.h"

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
