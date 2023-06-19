#include <string.h>
#include "dog.h"
/**
 * init_dog - initializes the dog struct.
 *
 * @d: pointer to the struct to initialize.
 * @name: name to use.
 * @age: to use.
 * @owner: to link the dog to.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
