#include "holberton.h"

/**
 * print_last_digit() to print last digit of a number
 * int a as input from int r from main function
 * return lastDigit for final integer value of last digit
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
