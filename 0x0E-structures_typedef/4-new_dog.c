#include "dog.h"
#include <stdlib.h>
/**
 *new_dog- creates a new dog struct
 *@name: dog's name
 *@age: age off the do
 *@owner: owner of the dog
 *Return: a new dog stct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int dogdet, agedet, ownerdet;
	dog_t *dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	for (dogdet = 0; name[dogdet]; dogdet++)
		;
	dogdet++;
	dog_ptr->name = malloc(dogdet * sizeof(char));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	for (ownerdet = 0; ownerdet < dogdet; ownerdet++)
		dog_ptr->name[ownerdet] = name[ownerdet];
	dog_ptr->age = age;
	for (agedet = 0; owner[agedet]; agedet++)
		;
	agedet++;
	dog_ptr->owner = malloc(agedet * sizeof(char));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	for (ownerdet = 0; ownerdet < agedet; ownerdet++)
		dog_ptr->owner[ownerdet] = owner[ownerdet];
	return (dog_ptr);
}
