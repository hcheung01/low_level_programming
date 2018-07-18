#include <stdlib.h>

int _strlen(char *s);
/**
 * argstostr - concatenates all arguments of the program
 * @ac: the number of arguments
 * @av: the given arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int len = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]);

	len = len + 1 + ac;

	array = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			array[k] = av[i][j];
		array[k] = '\n';
		k++;
	}
	array[k] = '\0';
	return (array);
}

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int total;

	for (total = 0; s[total] != '\0'; total++)
		;
	return (total);
}
