#ifndef _DOG_H
#define _DOG_H

#define NIL "(nil)"

#include <stdio.h>

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - defines a type dog
 */

typedef struct dog dog_t;

#endif
