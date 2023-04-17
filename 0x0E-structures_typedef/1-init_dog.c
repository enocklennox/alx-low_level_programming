#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 *
 * Description: Initializes metadata about the dog and type of dog's struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
