#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define STRING "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int len = strlen(STRING);

	write(1, STRING, len);
	return (1);
}
