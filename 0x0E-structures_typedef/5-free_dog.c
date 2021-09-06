#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing a pointer to a struct
 * @d: pointer to a struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
