#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function with 2 parameter
 * @format: char type pointer to string
 *
 * Description: prints anything followed by a new line
 * Return: na
 */
void print_all(const char * const format, ...)
{
	int j;
	char *s;
	va_list ap;

	va_start(ap, format);
	j = 0;
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (!s || !*s)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		if (format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(ap);
}
