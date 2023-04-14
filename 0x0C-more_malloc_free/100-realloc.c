#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with malloc(old_size)
 * @old_size: size of allocated space for ptr
 * @new_size: new size of new memory block
 *
 * Return: pointer to new memory block or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_p = malloc(new_size);

	if (new_p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)new_p + i) = *((char *)ptr + i);

	free(ptr);

	return (new_p);
}
