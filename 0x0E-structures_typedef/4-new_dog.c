#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function to create new dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	(*newdog).name = malloc(strlen(name) + 1);

	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	strcpy((*newdog).name, name);

	(*newdog).owner = malloc(strlen(owner) + 1);

	if ((*newdog).owner == NULL)
	{
		free((*newdog).name);
		free(newdog);
		return (NULL);
	}

	strcpy((*newdog).owner, owner);

	(*newdog).age = age;

	return (newdog);	
}
