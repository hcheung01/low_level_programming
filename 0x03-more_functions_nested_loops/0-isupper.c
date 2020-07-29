#include "coding.h"

/**
 * _isupper - function with 1 int type argument
 * @c: int type argument with char input
 *
 * Description: If/else to check if input is lower or uppercase
 * Return: 1 for uppercase and 0 for other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
