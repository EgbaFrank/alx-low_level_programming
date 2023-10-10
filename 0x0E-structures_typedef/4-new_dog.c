#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - makes a new dog of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; ++i)
		;
	++i;
	dog->name = malloc(sizeof(char) * i);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; ++j)
		dog->name[j] = name[j];

	dog->age = age;

	for (i = 0; owner[i]; ++i)
		;
	++i;
	dog->owner = malloc(sizeof(char) * i);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; ++j)
		dog->owner[j] = owner[j];
	return (dog);
}
