#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 *
 * @d: Pointer to declared structure
 * @name: Char variable
 * @age: Integer variable
 * @owner: Char variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        (*d).name = name;
        (*d).age = age;
        d->owner = owner;
}

