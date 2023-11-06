#include "dog.h"

/**
 * print_dog - a funtion that prints the content in struct
 *
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s", "(nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: %s", "(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
