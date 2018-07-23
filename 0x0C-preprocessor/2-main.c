#include <stdio.h>
#ifndef FILE
#define FILE __FILE__
#endif
/**
 * main - function with no arguments
 *
 * Description: prints the name of the file
 * Return: 0
 */
int main(void)
{
	printf("%s\n", FILE);
}
