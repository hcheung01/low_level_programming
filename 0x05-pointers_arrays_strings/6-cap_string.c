#include "holberton.h"

/**
 * cap_string - function with one argument
 * @str: char type pointer
 *
 * Description: capitalizes all words of a string
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i;
	char *tmp;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			tmp = s[i];
			i++;
		}
