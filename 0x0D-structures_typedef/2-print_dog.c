#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function with 1 argument
 * @d: structure pointer
 *
 * Description: prints a struct
 * Return: na
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
