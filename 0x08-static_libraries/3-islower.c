#include "holberton.h"

/**
 * _islower - entry point
 * @c: integer input
 *
 * Description: check for lowercase character
 * Return: 1 for lowercase and 0 for other
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
