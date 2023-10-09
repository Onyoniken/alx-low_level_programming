#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - main function
 * @d: dog structure whose memory is freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
