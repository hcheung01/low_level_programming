#include "coding.h"

/**
 * string_toupper - function with one argument
 * @s: char type pointer
 *
 * Description: changes all lowercase letters of string to uppercase
 * Return: p
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
