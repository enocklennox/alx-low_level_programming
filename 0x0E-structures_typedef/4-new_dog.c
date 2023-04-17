#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
