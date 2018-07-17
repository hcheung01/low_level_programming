#include "stdio.h"
#include "stdlib.h"

/**
 * main - function with two argument
 * @argc: int type argument
 * @argv: char type * pointer argument
 *
 * Description: prints the minimum number of coins
 * Return: na
 */
int main(int argc, char *argv[])
{
	(void)argc;
	int quarters, dimes, nickels, cent2, penny;
	int remaining, remaining2, remaining3, final;

	quarters = atoi(argv[1]) / 25;
	remaining = atoi(argv[1]) % 25;

	dimes = remaining / 10;
	remaining2 = remaining % 10;

	nickels = remaining2 / 5;
	remaining3 = remaining2 % 5;

	cent2 = remaining3 / 2;
	penny = remaining3 % 2;

	final = quarters + dimes + nickels + cent2 + penny;

	printf("%d\n", final);
}