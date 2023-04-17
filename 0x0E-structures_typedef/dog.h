#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: type char
 * @age: float type
 * @owner: char type
 *
 *Description: structure to store dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
