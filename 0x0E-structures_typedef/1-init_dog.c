#include "dog.h"

/**
 * init_dog - a function that initializes the struct dog.
 *
 * @d: struct dog *
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
