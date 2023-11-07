#include "dog.h"

/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * _strcpy - a function that copies string from a source to destination
 *
 * @dest: Pointer to a char variable
 * @src:  Pointer to a char variable
 * Return: *char
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = 0;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		y++;
	}

	dest[y] = '\0';
	return (dest);
}


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
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	else
	{
		dog = (dog_t *) malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if ((*dog).name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if ((*dog).owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
