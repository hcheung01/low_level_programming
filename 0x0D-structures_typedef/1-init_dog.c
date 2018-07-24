#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function with 4 arguments
 * @d: structure pointer
 * @name: pointer character
 * @age: float type argument
 * @owner: pointer type character
 *
 * Description: initialize a variable of type
 * Return: na
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
