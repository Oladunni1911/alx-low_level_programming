#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory previous allocated with a call to malloc
 * @old_size: integer size in bytes of the allocated space for ptr
 * @new_size: Integer size in bytes of the new memory block
 * Return: Pointer to the memory block of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p, *copy;
	int i, end;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		else
			return (new_p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_p = malloc(new_size);
	copy = ptr;
	if (new_p != NULL)
	{
		if (old_size < new_size)
			end = old_size / sizeof(ptr);
		else
			end = new_size / sizeof(ptr);
		for (i = 0; i < end; i++)
			new_p[i] = copy[i];
		free(ptr);
	}
	else
		return (NULL);
	return (new_p);
}
