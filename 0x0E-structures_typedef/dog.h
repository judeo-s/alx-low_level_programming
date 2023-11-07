#ifndef DOG_HEADER
#define DOG_HEADER

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a struct used to collect data about the owner of a dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Description: This struct was designed to collect data on a
 *              dog and its owner, using strings and float
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
