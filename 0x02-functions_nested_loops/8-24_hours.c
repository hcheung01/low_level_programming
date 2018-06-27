#include "holberton.h"

/**
 * jack_bauer - function with no argument
 *
 * Description: Using for loops to print every minute in 24hr
 * Return: none
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = '0'; hr <= '23'; hr++)
	{
		for (min = '0'; min <= '59'; min++)
		{
			_putchar(hr / 10);
			_putchar(hr % 10);
			_putchar(':');
			_putchar(min / 10);
			-putchar(min % 10);
			_putchar('\n');
		}
	}
}
