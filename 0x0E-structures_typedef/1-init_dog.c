#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable with the given values.
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: No return value (void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
