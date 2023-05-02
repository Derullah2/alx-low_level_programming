#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type dog
 * @d: the char to work with in the program
 * @name: name of the dog
 * @owner: owner of ther dog
 * @age: age ot the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
