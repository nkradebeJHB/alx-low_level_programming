#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Program that creates a new dog.
 * @name: Stores the name char array
 * @age: Stores the age float
 * @owner: Stores the owner char array
 * Return: Pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int newDogLen, newOwnerLen, i;

	newDogLen = newOwnerLen = 0;
	while (name[newDogLen++])
		;
	while (owner[newOwnerLen++])
		;
	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = malloc(newDogLen * sizeof(newDog->name));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < newDogLen; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	newDog->owner = malloc(newOwnerLen * sizeof(newDog->owner));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < newOwnerLen; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
