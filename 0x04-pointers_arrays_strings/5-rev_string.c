#include "coding.h"

/**
 * rev_string - function with one argument
 * @s: char type argument
 *
 * Description: reversing a string
 * Return: na
 */
void rev_string(char *s)
{
	int i, k, tmp, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
