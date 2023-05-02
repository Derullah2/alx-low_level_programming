#include "stdio.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: the char to work with in the program
 * @name: name of the dog
 * @owner: owner of ther dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
