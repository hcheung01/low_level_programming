#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct with dog info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: store different data types
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
