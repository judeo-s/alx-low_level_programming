#include "dog.h"

/**
 * new_dog - a function to create and initialize a dog_t struct
 *
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	static dog_t dog;

	dog.name = name;
	dog.age = age;
	dog.owner = owner;
	return (&dog);
}
