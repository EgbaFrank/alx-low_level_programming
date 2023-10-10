#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocate memory for dog struct
 * @d: pointer to memory
 *
 * Return: void;
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
