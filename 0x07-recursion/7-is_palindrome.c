#include "holberton.h"

int findLength(char *s);
int helper(char *s, int len, int a);

/**
 * is_palindrome - function with 1 argument
 * @s: char type pointer argument
 *
 * Description: test if string is palindrome
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (helper(s, findLength(s) - 1, 0));
}

/**
 * findLength - function with 1 argument
 * @s: char type pointer argument
 *
 * Description: To find length of string
 * Return: total index count of string
 */
int findLength(char *s)
{
	if (*s != '\0')
	{
		return (findLength(s + 1) + 1);
	}
	else
		return (0);
}

/**
 * helper - helper function with 3 argument
 * @s: char type pointer
 * @len: int type argument
 * @a: int type argument
 *
 * Description: to test conditions with all inputs from other functions
 * Return: 1 if palindrome 0 if false
 */
int helper(char *s, int len, int a)
{
	if (len ==  a)
		return (1);
	else if (len - a == 1)
	{
		if (s[len] == s[a])
			return (1);
		else
			return (0);
	}
	else if (s[len] != s[a])
		return (0);
	else
		return (helper(s, --len, ++a));
}
