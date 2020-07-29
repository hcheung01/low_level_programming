#include "coding.h"

/**
 * print_chessboard - function with 1 argument
 * @a: char type pointer to an array as argument
 *
 * Description: prints the chessboard
 * Return: na
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
