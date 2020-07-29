#include "coding.h"

/**
 * print_last_digit - function with one argument
 * @a: as input from int r from main function
 *
 * Description: prints the last digit of a number
 * Return: lastDigit
 */
int print_last_digit(int a)
{
	int lastDigit;

	lastDigit = a % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
