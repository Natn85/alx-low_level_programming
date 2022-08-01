#ifndef _DOG_H
#define _DOG_H


/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: member name
 * @age: member age
 * @owner: member owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
