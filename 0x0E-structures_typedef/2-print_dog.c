#include <stdio.h>
#include "dog.h"
/**
 * print_dog-prints struct dog
 * @d:pointer to struct dog
 */
void print_dog(struct dog *d)
{
	(*d).name? printf("Name: %s\n", (*d).name) :  printf("Name: (nil)\n");
	(*d).age? printf("Age: %f\n", (*d).age) :  printf("Name: (nil)\n");
	(*d).owner? printf("Name: %s\n", (*d).owner) :  printf("Name: (nil)\n");
}
