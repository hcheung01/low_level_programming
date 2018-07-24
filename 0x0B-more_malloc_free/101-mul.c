#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

int _atoi(char *s);
int _strlen(char *s);
/**
 * main - function with two arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Description: program that multiplies two positive numbers
 * Return: value
 */
int main(int argc, char *argv[])
{
	int count, len1, len2, temp1, temp2, *array, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	t_len = len1 + len2 - 1;

	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (array == NULL)
		return (NULL);

	len1 -= 1;
	len2 -= 1;
	for (count = 1; argv[count] != '\0', count++)
	{
		for (; argv[1][len1]; len1--)
		{
			temp1 = argv[1][len1 - 1] - '0';;
		}
		for (; argv[2][len2]; len2--)
		{
			temp2 = argv[2][len2 - 1] - '0';
		}
		for (; array[t_len] > 0
		if ((temp1 * temp2) > 9)
			array[
	}
}

int _atoi(char *s)
{
	int i, sign, numb;

	i = 0;
	sign = 1;
	numb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				numb = (s[i] - '0') * sign + numb * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (numb);
}

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

