#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function that frees memory for dog_t struct
 * @d: Input struct
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
