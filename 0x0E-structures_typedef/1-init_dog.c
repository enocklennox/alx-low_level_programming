#include <stddef.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 *
 * Description: Initializes metadata about the dog and type of dog's struct
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;
