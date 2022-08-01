#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: member name
 * @age: member age
 * @owner: member owner
 *
 * Return: dog_type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;

	if (age < 0 || !owner || !name)
		return (NULL);

	this_dog = malloc(sizeof(dog_t));

	if (!this_dog)
		return (NULL);

	this_dog->name = strdup(name);
	if (!this_dog->name)
	{
		free(this_dog);
		return (NULL);
	}

	this_dog->age = age;

	this_dog->owner = strdup(owner);
	if (!this_dog->owner)
	{
		free(this_dog->owner);
		free(this_dog);
		return (NULL);
	}

	return (this_dog);
}
