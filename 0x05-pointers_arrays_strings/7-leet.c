#include "coding.h"

/**
 * leet - function with one argument
 * @str: char type pointer argument
 *
 * Description: encodes a string in 1337
 * Return: value of encoded string
 */
char *leet(char *str)
{
	char *letters, *replace;
	int count, count2;

	letters = "aAeEoOtTlL";
	replace = "4433007711";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (letters[count2] != '\0')
		{
			if (str[count] == letters[count2])
			{
				str[count] = replace[count2];
			}
			count2++;
		}
		count++;
	}
	return (str);
}
