#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - a structure type with elements defined
 * @name: pointer to element that hold dog's name
 * @age: element that holds age
 * @owner: pointer to element that holds owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
