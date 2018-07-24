#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function with 3 arguments
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	else
	{
		new_d->name = name;
		new_d->age = age;
		new_d->owner = owner;
	}
	return (new_d);
}
