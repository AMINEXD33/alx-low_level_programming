#include "dog.h"
#include <stdlib.h>
/**
 *free_dog- free a struct (dog)
 *@d: struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
