#include "coding.h"

/**
 * rot13 - function with 1 argument
 * @str: char type pointer argument
 *
 * Description: encodes rot13 with a string
 * Return: string value
 */
char *rot13(char *str)
{
	char *input, *output;
	int count, count2;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (input[count2] != '\0')
		{
			if (str[count] == input[count2])
			{
				str[count] = output[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (str);
}
