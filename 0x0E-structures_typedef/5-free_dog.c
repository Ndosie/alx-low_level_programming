#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory allocated for dog struct
 * @d: dog struct to free memory for
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
