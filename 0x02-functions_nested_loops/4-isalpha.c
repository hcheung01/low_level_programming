#include "coding.h"

/**
 * _isalpha - to output return 1 if alphabet or return 0 for other
 * @c: is the input
 *
 * Description: if/else to check for upper or lower case
 * Return: return 1 if a letter, lower or uppercase and 0 is not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
